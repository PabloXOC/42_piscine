/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tot_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:31:10 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/09 16:46:24 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lib.h"

#define TRUE 1
#define FALSE 0

int	ft_tot_len(char *map)
{
	int		fd;
	char	buffer[1];
	int		size;
	int		bytesread;

	fd = open(map, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error opening file\n", 19);
		return (FALSE);
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
