/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 22:38:12 by pabloxoc          #+#    #+#             */
/*   Updated: 2023/09/21 18:30:35 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_while_l_statements(int i, int j, int k, int l)
{
	while (l <= '9')
	{
		if (i < k || (i == k && j < l))
		{
			write(1, &i, 1);
			write(1, &j, 1);
			write(1, " ", 1);
			write(1, &k, 1);
			write(1, &l, 1);
			if (i == '9' && j == '8' && k == '9' && l == '9')
			{
			}
			else
			{
				write(1, ", ", 2);
			}
		}
		l++;
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				l = '0';
				ft_while_l_statements(i, j, k, l);
				k++;
			}
			j++;
		}
		i++;
	}
}
