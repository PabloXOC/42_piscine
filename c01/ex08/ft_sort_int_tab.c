/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:03:27 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/23 19:00:36 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int	*tab, int size)
{
	int	loop;
	int	temp;
	int	loop2;

	loop = 0;
	while (loop < size)
	{
		loop2 = 0;
		while (loop2 < size - 1)
		{
			if (tab[loop2] > tab[loop2 + 1])
			{
				temp = tab[loop2];
				tab[loop2] = tab[loop2 + 1];
				tab[loop2 + 1] = temp;
			}
			loop2++;
		}
		loop++;
	}
}

/*int 	main(void)
{
	int	array[6] = {5, 23, 89, 11, 654};
	int	size;
	int	loop;

	size = 5;
	ft_sort_int_tab(array, size);
	for (loop = 0; loop < size; loop++)
	{
		printf("%d", array[loop]);
	}
}*/
