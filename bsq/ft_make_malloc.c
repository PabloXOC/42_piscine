/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:15:31 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/10/12 14:07:39 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	**ft_make_malloc(char *map, int i, char *map_str)
{
	char	**array_map;

	array_map = (char **)malloc((ft_num_lines(map)) * (sizeof(char *)));
	i = 0;
	while (i < ft_num_lines(map))
	{
		array_map[i] = (char *)malloc((ft_len_line(map_str) + 1)
				* (sizeof(char)));
		array_map[i][ft_len_line(map_str)] = '\0';
		i++;
	}
	return (array_map);
}

int	**ft_make_int_malloc(char *map, int i, char *map_str)
{
	int	**int_array_map;

	int_array_map = (int **)malloc((ft_num_lines(map)) * (sizeof(int *)));
	while (i < ft_num_lines(map))
	{
		int_array_map[i] = (int *)malloc((ft_len_line(map_str) + 1)
				* (sizeof(int)));
		i++;
	}
	return (int_array_map);
}
