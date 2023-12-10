/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:33:28 by pablo             #+#    #+#             */
/*   Updated: 2023/11/20 18:39:39 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <fcntl.h>
#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int	ft_strcmp(char *s1, char *s2)
{
	int	loop;

	loop = 0;
	while (s1[loop] != '\0' && s2[loop] != '\0')
	{
		if (s1[loop] != s2[loop])
			return (s1[loop] - s2[loop]);
		loop++;
	}
	if (s1[loop] != '\0')
		return (s1[loop] - s2[loop]);
	if (s2[loop] != '\0')
		return (s1[loop] - s2[loop]);
	return (0);
}

int	ft_atoi(char *str)
{
	int	loop;
	int	temp;

	temp = 0;
	loop = 0;
	while (str[loop] != '\0')
	{
		temp = 10 * temp + str[loop] - '0';
		loop++;
	}
	return (temp);
}

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			return (1);
		str++;
	}
	return (0);
}

int	check_c(int argc, char **argv)
{
	int	numbytes;

	if (ft_strcmp("-c", argv[1]) == 0)
	{
		if (argc > 2)
		{
			if (ft_str_is_numeric(argv[2]) == 0)
			{
				numbytes = ft_atoi(argv[2]);
				return (numbytes);
			}
			else
				return (-1);
		}
		else
			return (-2);
	}
	else
		return (-3);
}

int	ft_strlen(char	*str)
{
	int		len;

	len = 0;
	while (*str != '\0')
	{
		str = str + 1;
		len++;
	}
	return (len);
}

void	ft_error(int c, char **argv)
{
	write(1, "tail: ", 6);
	if (c == -1)
	{
		write(1, "invalid number of bytes: '", 26);
		write(1, argv[2], ft_strlen(argv[2]));
		write(1, "'\n", 2);
	}
	if (c == -2)
	{
		write(1, "option requires an argument -- 'c'\n", 35);
		write(1, "Try 'tail --help' for more information.\n", 40);
	}
}

int	handle_error(char *filename)
{
	write(1, "cat", 3);
	write(1, ": ", 2);
	write(1, filename, ft_strlen(filename));
	write(1, ": ", 2);
	write(1, strerror(errno), ft_strlen(strerror(errno)));
	write(1, "\n", 1);
	return (1);
}

int	ft_read_error(char *filename)
{
	int		fd;
	ssize_t	bytes_read;
	char	buffer[BUFFER_SIZE];
	int		error;

	error = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		handle_error(filename);
		return (1);
	}
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
		bytes_read = read(fd, buffer, sizeof(buffer));
	if (bytes_read == -1)
		error = handle_error(filename);
	if (close(fd) == -1)
		error = handle_error(filename);
	if (error == 1)
		return (1);
}

int	calculateFileSize(char *filename)
{
	int		fd;
	int		size;
	ssize_t	bytes_read;
	char	buffer[1];

	size = 0;
	fd = open(filename, O_RDONLY);
	while (bytes_read > 0)
	{
		size++;
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
	return (size);
}

void	ft_read(char *filecontent)
{
	
}

void	ft_tail_c(int bytes, int argc, char **argv)
{
	int		i;
	int		file_size;
	int		error;
	char	*file_content;

	while (argc < 4)
	{
	}
	i = 3;
	while (i < argc)
	{
		error = ft_read_error(argv[i]);
		if (error == 0)
		{
			file_size = calculateFileSize(argv[i]);
			file_content = (char *)malloc(file_size + 1);
			ft_read(file_content);
		}
/* 		else
			write error */
		i++;
	}
}

int main(int argc, char **argv)
{
	int	c;

	while (argc == 1)
	{
	}
	if (argc > 1)
		c = check_c(argc, argv);
	if (c == -1 || c == -2)
		ft_error(c, argv);
	/* if (c == -3)
		ft_tail_norm(argc, argv); */
	if (c >= 0)
		ft_tail_c(c, argc, argv);
}
