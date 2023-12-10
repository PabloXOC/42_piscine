/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complete.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:14:17 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/01 16:02:26 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	**ft_complete(int **array)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		array[3][i] = 10 - array[0][i] - array[1][i] - array[2][i];
		i++;
	}
	i = 0;
	while (i < 3)
	{
		array[i][3] = 10 - array[i][0] - array[i][1] - array[i][2];
		i++;
	}
	array[3][3] = 10 - array[3][0] - array[3][1] - array[3][2];
	i = 0;
	return (array);
}
