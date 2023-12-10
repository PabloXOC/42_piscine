/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:11:11 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/29 21:13:30 by pablo            ###   ########.fr       */
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

int	ft_something(int i, int dic_len, char *nbr_str, t_dict *array_str)
{
	int	temp;

	temp = 1;
	while (i < dic_len && temp != 0)
	{
		temp = ft_strcmp(nbr_str, array_str[i].num);
		if (temp == 0)
		{
			write(1, array_str[i].str, ft_strlen(array_str[i].str));
			write(1, " ", 1);
		}
		i++;
	}
	return (temp);
}

void	ft_compare(int nbr, t_dict *array_str, int dic_len, int len)
{
	int		temp;
	int		i;
	char	*nbr_str;

	temp = nbr;
	while (temp > 0)
	{
		temp = temp / 10;
		len++;
	}
	nbr_str = (char *)malloc((len) * sizeof(char));
	if (nbr_str == NULL)
	{
		write(1, "Error Creating Malloc", 21);
	}
	ft_putnbr(nbr, len - 1, nbr_str);
	nbr_str[len] = '\0';
	i = 0;
	temp = ft_something(i, dic_len, nbr_str, array_str);
	if (temp != 0)
		write(1, "Dict Error\n", 11);
	free(nbr_str);
}

void	ft_compare_cpy(char *nbr_str, t_dict *array_str, int dic_len)
{
	int		i;
	int		temp;

	i = 0;
	temp = ft_something(i, dic_len, nbr_str, array_str);
	if (temp != 0)
		write(1, "Dict Error\n", 11);
	free(nbr_str);
}
