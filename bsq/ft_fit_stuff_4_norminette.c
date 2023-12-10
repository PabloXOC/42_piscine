/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fit_stuff_4_norminette.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:05:36 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/12 14:18:21 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_free(t_characters parameters, char **array_map, char *map_str)
{
	free_char_pp(parameters.line_int, array_map);
	free(parameters.lines);
	free(map_str);
}

void	ft_something(t_characters parameters, char **array_map, int **big_sqr)
{
	ft_mark_in_sqr(parameters, array_map, big_sqr);
	ft_write_map(array_map, parameters);
	free_int_pp(parameters.line_int, big_sqr);
}

void	map(char *map)
{
	char	*map_str;

	map_str = map_to_str(map);
	if (!(map_str))
	{
		free(map_str);
		return ;
	}
	evaluate_maps(map, map_str);
}

void	evaluate_maps(char *map, char *map_str)
{
	char			**array_map;
	t_characters	parameters;

	parameters.lines = (char *)malloc((ft_len_lines(map_str) + 1)
			* sizeof(char));
	array_map = ft_make_malloc(map, 0, map_str);
	if ((!parameters.lines) && (!array_map))
	{
		ft_free(parameters, array_map, map_str);
		return ;
	}
	parameters.lines[ft_len_lines(map_str)] = '\0';
	parameters = write_in_parameters(parameters, map_str);
	array_map = write_in_array_map(array_map, map_str);
	if (ft_errors(map_str, array_map, map) != 0)
	{
		free_char_pp(ft_num_lines(map) - 1, array_map);
		free(parameters.lines);
		free(map_str);
		write(1, "map error\n", 10);
		return ;
	}
	write_maps(map, map_str, array_map, parameters);
	ft_free(parameters, array_map, map_str);
}
