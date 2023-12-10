/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tot_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:31:10 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/08 19:13:23 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_tot_len(char *dic)
{
	int		fd;
	char	buffer[1];
	int		size;
	int		bytesread;

	fd = open(dic, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error opening file", 18);
		return (0);
	}
	size = 0;
	bytesread = read(fd, buffer, sizeof(buffer));
	while ((bytesread) > 0)
	{
		bytesread = read(fd, buffer, sizeof(buffer));
		size += bytesread;
	}
	close(fd);
	return (size);
}
