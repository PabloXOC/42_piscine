/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:09:50 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/11 20:53:07 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_putnbr(int nb, int len, char *str);
void	ft_compare(int nbr, t_dict *array_str, int dic_len, int len);
void	ft_compare_cpy(char *nbr_str, t_dict *array_str, int dic_len);

char	*ft_read_num(char *str, int cycle)
{
	int		len;
	int		rest;
	int		nbr;
	char	*str_cut;

	len = ft_strlen(str);
	if (cycle == 0 && len % 3 != 0)
		rest = len % 3;
	else
		rest = 3;
	str_cut = (char *)malloc(rest * sizeof(char));
	str_cut[rest] = '\0';
	while (rest > 0)
	{
		str_cut[rest - 1] = str[rest - 1 + 3 * cycle];
		rest--;
	}
	return (str_cut);
}

void	ft_mult(char *str, int i, t_dict *array_str, int dic_len)
{
	int	j;
	char *big_n;
	int k;

	k = 1;
	if ((ft_strlen(str) % (3 * i) >= 1 && ft_strlen(str) / (3 * i) >= 1)
		|| (ft_strlen(str) / (3 * i) > 1))
	{
		big_n = (char *)malloc(((ft_strlen(str)/3 - i) * 3) + 1);
		if (big_n == NULL)
		{
			write(1, "Error Creating Malloc", 21);
		}
		big_n[0] = '1';
		while (k <= ((ft_strlen(str)/3 - i) * 3))
		{
			big_n[k] = '0';
			k++;
		}
		big_n[k] = '\0';
		if (ft_strlen(big_n) > 1)
			ft_compare_cpy(big_n, array_str, dic_len);
	}
}

void	ft_write_num(char *str, t_dict *array_str, int dic_len, int i)
{
	int	nbr;
	int	res;

	while (ft_strlen(str) - (3 * (i - 1)) > 0)
	{
		nbr = ft_atoi(ft_read_num(str, i - 1));
		res = nbr / 100;
		if (res >= 1)
		{
			ft_compare(res, array_str, dic_len, 0);
			ft_compare(100, array_str, dic_len, 0);
			res = nbr % 100;
			if (res >= 20)
			{
				nbr = res - res % 10;
				ft_compare(nbr, array_str, dic_len, 0);
				nbr = res % 10;
				ft_compare(nbr, array_str, dic_len, 0);
			}
			else
				ft_compare(res, array_str, dic_len, 0);
		}
		if (res == 0)
		{
			if (res >= 20)
			{
				nbr = res - res % 10;
				ft_compare(nbr, array_str, dic_len, 0);
				nbr = res % 10;
				ft_compare(nbr, array_str, dic_len, 0);
			}
			else
				ft_compare(res, array_str, dic_len, 0);
		}
		ft_mult(str, i, array_str, dic_len);
		i++;
	}
}
