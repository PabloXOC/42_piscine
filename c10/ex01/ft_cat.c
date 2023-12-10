/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:43:19 by pablo             #+#    #+#             */
/*   Updated: 2023/11/20 13:38:50 by pablo            ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str = str + 1;
		len++;
	}
	return (len);
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

int	ft_cat(char *filename)
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
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	if (bytes_read == -1)
		error = handle_error(filename);
	if (close(fd) == -1)
		error = handle_error(filename);
	if (error == 1)
		return (1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	error;

	i = 1;
	error = 0;
	while (i < argc)
	{
		error += ft_cat(argv[i]);
		i++;
	}
	if (error != 0)
		return (EXIT_FAILURE);
}
