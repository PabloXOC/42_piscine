/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:14:17 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/12 14:41:04 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_first_line_errors(char *map_str, int i, int counter)
{
	while (map_str[i] != '\n')
	{
		i++;
		counter++;
	}
	if (counter < 4)
		return (1);
	if (map_str[i - 1] == map_str[i - 2] || map_str[i - 2] == map_str[i - 3]
		|| map_str[i - 1] == map_str[i - 3])
		return (2);
	while (i > counter - 3)
	{
		if (map_str[i - 1] < 32 || map_str[i - 1] > 126)
			return (3);
		i--;
	}
	i = 0;
	while (i < counter - 3)
	{
		if (map_str[i] < '0' || map_str[i] > '9')
			return (4);
		i++;
	}
	return (0);
}

int	ft_compare_char(t_characters parameters, char **array_map, int i, char *map)
{
	int	j;

	while (i < (ft_num_lines(map)))
	{
		j = 0;
		while (array_map[i][j] != '\0')
		{
			if (array_map[i][j] != parameters.empty
					&& array_map[i][j] != parameters.obstacle)
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_compare_len(char **array_map, int i, int len, t_characters parameters)
{
	int	j;

	while (i < parameters.line_int)
	{
		j = 0;
		len = 0;
		while (array_map[i][j] != '\0')
		{
			len++;
			j++;
		}
		if (len != parameters.len_lines)
			return (1);
		i++;
	}
	return (0);
}

int	ft_1_sqr(char *map_str, t_characters parameters)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (map_str[i] != '\n')
		i++;
	i++;
	while (map_str[i] != '\0')
	{
		if (map_str[i] == parameters.empty)
			counter++;
		i++;
	}
	return (counter);
}

int	ft_errors(char *map_str, char **array_map, char *map)
{
	t_characters	parameters;

	if (ft_first_line_errors(map_str, 0, 0) != 0)
	{
		return (1);
	}
	parameters.lines = (char *)malloc(ft_len_lines(map_str) * sizeof(char));
	parameters = write_in_parameters(parameters, map_str);
	if (ft_compare_char(parameters, array_map, 0, map) == 1)
		return (2);
	if (ft_compare_len(array_map, 0, 0, parameters) == 1)
		return (3);
	if (ft_1_sqr(map_str, parameters) == 0)
		return (4);
	free(parameters.lines);
	return (0);
}
