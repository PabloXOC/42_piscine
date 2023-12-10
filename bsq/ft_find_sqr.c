/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_sqr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:46:09 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/12 14:31:56 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_calc_sqr(char **array_map, t_characters parameters, int i, int j)
{
	int	found_obs;
	int	count;
	int	x;

	found_obs = 0;
	count = 0;
	while (found_obs == 0)
	{
		x = 0;
		if (i + count > parameters.line_int || j + count > parameters.len_lines)
			found_obs = 1;
		while (x <= count && found_obs == 0)
		{
			if (array_map[i + x][j + count] == parameters.obstacle
				|| array_map[i + x][j + count] == '\0' || array_map[i + count][j
				+ x] == parameters.obstacle || array_map[i + count][j
				+ x] == '\0')
				found_obs = 1;
			x++;
		}
		if (found_obs == 0)
			count++;
	}
	return (count);
}

int	**ft_find_sqr(char **array_map, t_characters parameters, char *map,
		char *map_str)
{
	int	i;
	int	j;
	int	**big_sqr;

	big_sqr = ft_make_int_malloc(map, 0, map_str);
	if (!(!big_sqr))
	{
		i = 0;
		while (i < parameters.line_int)
		{
			j = 0;
			while (array_map[i][j] != '\0')
			{
				big_sqr[i][j] = ft_calc_sqr(array_map, parameters, i, j);
				j++;
			}
			i++;
		}
	}
	return (big_sqr);
}
