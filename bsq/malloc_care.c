/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_care.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:03:24 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/12 14:08:11 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	free_char_pp(int n_lines, char **array)
{
	int	i;

	i = 0;
	while (i <= n_lines)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	free_int_pp(int n_lines, int **array)
{
	int	i;

	i = 0;
	while (i <= n_lines)
	{
		free(array[i]);
		i++;
	}
	free(array);
}
