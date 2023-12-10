/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_lines.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:11:11 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/11 20:15:33 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

#define TRUE 1
#define FALSE 0

int	ft_num_lines(char *map)
{
	int		fd;
	int		num_lines;
	char	ch;

	fd = open(map, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error opening file\n", 19);
		return (FALSE);
	}
	num_lines = 0;
	while (read(fd, &ch, 1) > 0)
	{
		if (ch == '\n')
		{
			num_lines++;
		}
	}
	close(fd);
	return (num_lines);
}

int	ft_len_line(char *map_str)
{
	int	num_char;
	int	i;

	i = 0;
	num_char = 0;
	while (map_str[i] != '\n')
	{
		i++;
	}
	i++;
	while (map_str[i] != '\n')
	{
		num_char++;
		i++;
	}
	return (num_char);
}
