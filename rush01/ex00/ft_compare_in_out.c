/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare_in_out.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:14:17 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/01 16:02:28 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
//compare top
int	ft_compare_top(int **inside, int *outside)
{
	int	i;
	int	j;
	int	counter;
	int	prev;

	i = 0;
	while (i < 4)
	{
		counter = 1;
		j = 1;
		prev = inside[0][i];
		while (j < 4)
		{
			if (inside[j][i] > prev)
			{
				prev = inside[j][i];
				counter++;
			}
			j++;
		}
		if (counter != outside[i])
			return (0);
		i++;
	}
	return (1);
}
//compare bottom

int	ft_compare_bottom(int **inside, int *outside)
{
	int	i;
	int	j;
	int	counter;
	int	prev;

	i = 0;
	while (i < 4)
	{
		counter = 1;
		j = 2;
		prev = inside[3][i];
		while (j >= 0)
		{
			if (inside[j][i] > prev)
			{
				prev = inside[j][i];
				counter++;
			}
			j--;
		}
		if (counter != outside[i + 4])
			return (0);
		i++;
	}
	return (1);
}

//compare left
int	ft_compare_left(int **inside, int *outside)
{
	int	i;
	int	j;
	int	counter;
	int	prev;

	i = 0;
	while (i < 4)
	{
		counter = 1;
		j = 1;
		prev = inside[i][0];
		while (j < 4)
		{
			if (inside[i][j] > prev)
			{
				prev = inside[i][j];
				counter++;
			}
			j++;
		}
		if (counter != outside[i + 8])
			return (0);
		i++;
	}
	return (1);
}
//compare right

int	ft_compare_right(int **inside, int *outside)
{
	int	i;
	int	j;
	int	counter;
	int	prev;

	i = 0;
	while (i < 4)
	{
		counter = 1;
		j = 2;
		prev = inside[i][3];
		while (j >= 0)
		{
			if (inside[i][j] > prev)
			{
				prev = inside[i][j];
				counter++;
			}
			j--;
		}
		if (counter != outside[i + 12])
			return (0);
		i++;
	}
	return (1);
}

int	ft_compare_in_out(int **inside, int *outisde)
{
	int	is_true;

	is_true = 1;
	is_true = is_true * ft_compare_top(inside, outisde);
	is_true = is_true * ft_compare_bottom(inside, outisde);
	is_true = is_true * ft_compare_left(inside, outisde);
	is_true = is_true * ft_compare_right(inside, outisde);
	if (is_true == 1)
		return (0);
	else
		return (1);
}
