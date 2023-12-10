/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_4x4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:39:24 by gnicolie          #+#    #+#             */
/*   Updated: 2023/10/01 16:02:19 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	**make_matrix(void)
{
	int	i;
	int	**matrix;
	int	files;

	matrix = (int **)malloc(4 * 16);
	i = 0;
	files = 4;
	while (i < files)
	{
		matrix[i] = (int *)malloc(4 * 16);
		i++;
	}
	return (matrix);
}

int	**int_to_4x4(int ba4, int **matrix)
{
	int	x;
	int	i;

	x = 2;
	while (x >= 0)
	{
		i = 2;
		while (i >= 0)
		{
			matrix[x][i] = ba4 % 10;
			ba4 = ba4 / 10;
			i--;
		}
		x--;
	}
	return (matrix);
}
