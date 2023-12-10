/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:11:11 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/08 19:10:15 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_calc_new(char *dic)
{
	int		fd;
	int		num_lines;
	char	ch;

	fd = open(dic, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error opening file\n", 19);
		return (-1);
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
