/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dump.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:09:50 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/08 19:10:26 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_dump(char *dic, int size, char *file_contents)
{
	int	fd;
	int	bytes_read;

	fd = open(dic, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error opening file\n", 19);
		return (NULL);
	}
	bytes_read = read(fd, file_contents, size);
	if (bytes_read == -1)
	{
		write(1, "Error opening file\n", 19);
		free(file_contents);
		close(fd);
		return (NULL);
	}
	file_contents[bytes_read] = '\0';
	close(fd);
	return (file_contents);
}
