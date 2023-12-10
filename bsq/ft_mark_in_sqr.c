/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mark_in_sqr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:16:33 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/10/11 19:24:15 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

t_square	ft_find_biggest_sqr(t_characters parameters, int **big_sqr)
{
	int			i;
	int			j;
	int			prev;
	t_square	square;

	i = 0;
	prev = big_sqr[0][0];
	while (i < parameters.line_int)
	{
		j = 0;
		while (j < parameters.len_lines)
		{
			if (big_sqr[i][j] > prev)
			{
				prev = big_sqr[i][j];
				square.x = i;
				square.y = j;
			}
			j++;
		}
		i++;
	}
	square.dimensions = prev;
	return (square);
}

void	ft_mark_in_sqr(t_characters parameters, char **array_map, int **big_sqr)
{
	int			x;
	int			y;
	t_square	square;

	square = ft_find_biggest_sqr(parameters, big_sqr);
	x = square.x;
	while (x < (square.x + square.dimensions))
	{
		y = square.y;
		while (y < (square.y + square.dimensions))
		{
			array_map[x][y] = parameters.full;
			y++;
		}
		x++;
	}
}
