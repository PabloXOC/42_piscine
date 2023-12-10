/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:59:45 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/11 19:33:01 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_write_map(char **array_map, t_characters parameters)
{
	int	i;
	int	j;

	i = 0;
	while (i < parameters.line_int)
	{
		j = 0;
		while (j < parameters.len_lines)
		{
			write(1, &array_map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
