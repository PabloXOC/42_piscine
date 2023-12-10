/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_malloc_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:25:34 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/08 19:10:44 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_num_len(int line_n, char *dic, int i)
{
	int	count;

	count = 0;
	while (count < line_n)
	{
		if (dic[i] == '\n')
		{
			count++;
		}
		i++;
	}
	count = 0;
	while (dic[i] >= '0' && dic[i] <= '9')
	{
		count++;
		i++;
	}
	return (count);
}

int	ft_num(int line_n, int pos, char *dic, int i)
{
	int		count;
	char	ch;
	char	c;

	count = 0;
	while (count < line_n)
	{
		if (dic[i] == '\n')
		{
			count++;
		}
		i++;
	}
	count = 0;
	while (count < pos)
	{
		count++;
		i++;
	}
	return (dic[i]);
}

int	ft_str_len(int line_n, char *dic, int i)
{
	int	count;

	count = 0;
	while (count < line_n)
	{
		if (dic[i] == '\n')
			count++;
		i++;
	}
	count = 0;
	while (dic[i] >= '0' && dic[i] <= '9')
		i++;
	while (dic[i] == 32)
		i++;
	while (dic[i] == ':')
		i++;
	while (dic[i] == 32)
		i++;
	while (dic[i] >= 32 && dic[i] < 127)
	{
		count++;
		i++;
	}
	return (count);
}

int	ft_str(int line_n, int pos, char *dic, int i)
{
	int	count;

	count = 0;
	while (count < line_n)
	{
		if (dic[i] == '\n')
			count++;
		i++;
	}
	count = 0;
	while (dic[i] >= '0' && dic[i] <= '9')
		i++;
	while (dic[i] == 32)
		i++;
	while (dic[i] == ':')
		i++;
	while (dic[i] == 32)
		i++;
	while (count < pos)
	{
		count++;
		i++;
	}
	return (dic[i]);
}

t_dict	*ft_make_malloc_str(int num_lines, char *dic, int i, int j)
{
	t_dict	*array_of_structures;
	int		len;

	array_of_structures = (t_dict *)malloc(num_lines * sizeof(t_dict));
	while (i < num_lines)
	{
		len = ft_num_len(i, dic, 0);
		array_of_structures[i].num = (char *)malloc(len * sizeof(char));
		j = 0;
		while (j < len)
		{
			array_of_structures[i].num[j] = ft_num(i, j, dic, 0);
			j++;
		}
		len = ft_str_len(i, dic, 0);
		array_of_structures[i].str = (char *)malloc(len * sizeof(char));
		j = 0;
		while (j < len)
		{
			array_of_structures[i].str[j] = ft_str(i, j, dic, 0);
			j++;
		}
		i++;
	}
	return (array_of_structures);
}
