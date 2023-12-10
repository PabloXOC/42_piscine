/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_maps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:47:01 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/10/12 13:18:28 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*map_to_str(char *map)
{
	char	*map_str;

	map_str = (char *)malloc((ft_tot_len(map) + 1) * sizeof(char));
	if (!(!map_str))
	{
		map_str[ft_tot_len(map)] = '\0';
		map_str = ft_dump(map, ft_tot_len(map), map_str);
	}
	return (map_str);
}

char	**write_in_array_map(char **array_map, char *map_str)
{
	int	c;
	int	new_line;
	int	i;

	c = 0;
	new_line = 0;
	while (map_str[c] != '\n')
		c++;
	c++;
	i = 0;
	while (map_str[c] != '\0')
	{
		if (map_str[c] == '\n')
		{
			i = 0;
			new_line++;
			c++;
		}
		array_map[new_line][i] = map_str[c];
		i++;
		c++;
	}
	return (array_map);
}

t_characters	write_in_parameters(t_characters parameters, char *map_str)
{
	int	c;
	int	x;

	c = 0;
	while (map_str[c] != '\n' && map_str[c] != '\0')
	{
		c++;
	}
	c--;
	parameters.full = map_str[c];
	c--;
	parameters.obstacle = map_str[c];
	c--;
	parameters.empty = map_str[c];
	x = 0;
	while (x < c)
	{
		parameters.lines[x] = map_str[x];
		x++;
	}
	parameters.line_int = ft_atoi(parameters.lines);
	parameters.len_lines = ft_len_line(map_str);
	return (parameters);
}

int	ft_len_lines(char *map_str)
{
	int	i;
	int	len;

	i = 0;
	while (map_str[i] != '\n')
	{
		i++;
	}
	len = i - 3;
	return (len);
}

void	write_maps(char *map, char *map_str, char **array_map,
		t_characters parameters)
{
	int	**big_sqr;

	big_sqr = ft_find_sqr(array_map, parameters, map, map_str);
	if (!big_sqr)
	{
		free_int_pp(parameters.line_int, big_sqr);
		return ;
	}
	ft_something(parameters, array_map, big_sqr);
}
