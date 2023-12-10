/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:22:34 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/24 18:05:23 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_ifs(int max_x, int max_y, int i, int j)
{
	if ((j == max_y && i == max_x && j != 0 && i != 0) || (i == 0 && j == 0))
		ft_putchar('o');
	if ((j == max_y && i == 0 && j != 0) || (j == 0 && i == max_x && i != 0))
		ft_putchar('o');
	if ((j == max_y || j == 0) && i != 0 && i != max_x)
		ft_putchar('-');
	if ((i == max_x || i == 0) && j != 0 && j != max_y)
		ft_putchar('|');
	if (j != 0 && j != max_y && i != 0 && i != max_x)
		ft_putchar(' ');
}

void	rush(int max_x, int max_y)
{
	int	i;
	int	j;

	max_x--;
	max_y--;
	j = 0;
	if (max_x < 0 || max_y < 0)
	{
		write (1, "Has usado al menos un numero negativo o nulo. ", 47);
		write (1, "Por favor usa dos numeros positivos.", 37);
		return ;
	}
	while (j <= max_y)
	{
		i = 0;
		while (i <= max_x)
		{
			ft_ifs(max_x, max_y, i, j);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
