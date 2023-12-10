/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:46:58 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/06 11:37:27 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*output;
	int	i;

	if (max <= min)
		return (0);
	output = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		output[i] = min;
		i++;
		min++;
	}
	return (output);
}

/* int	main(void)
{
	int	min;
	int	max;
	int	*array;
	int	i;

	min = -10;
	max = 23;
	array = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d\n", array[i]);
		i++;
	}
} */
