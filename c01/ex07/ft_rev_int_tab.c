/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:16:28 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/23 16:57:14 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int	*tab, int size)
{
	int	loop;
	int	temp;

	loop = 0;
	while (loop < size)
	{
		temp = tab[loop];
		tab[loop] = tab[size - 1];
		tab[size - 1] = temp;
		size--;
		loop++;
	}
}

/*int 	main(void)
{
	int	array[6] = {5, 23, 89, 11, 654};
	int	size;
	int	loop;

	size = 5;
	ft_rev_int_tab(array, size);
	for (loop = 0; loop < size; loop++)
	{
		printf("%d", array[loop]);
	}
}*/
