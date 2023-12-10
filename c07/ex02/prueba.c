/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:37:46 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/06 13:08:12 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = (int *)malloc(len * sizeof(int));
	if (!(*range))
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (len);
}

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	ret;
	int	i;

	min = -10;
	max = 23;
	ret = ft_ultimate_range(&range, min, max);
	printf("%d", ret);
	i = 0;
	while (i < max - min)
	{
		printf("%d", range[i]);
		i++;
	}
}
