/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:17:46 by pablo             #+#    #+#             */
/*   Updated: 2023/11/13 12:52:09 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_read(char *str)
{
	int		fd;
	char	buffer[1];
	int		bytesread;

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return ;
	}
	bytesread = read(fd, buffer, sizeof(buffer));
	while (bytesread > 0)
	{
		write(1, buffer, 1);
		bytesread = read(fd, buffer, sizeof(buffer));
	}
	if (bytesread == -1)
		write(1, "Cannot read file.\n", 18);
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc == 2)
	{
		ft_read(argv[1]);
	}
}
