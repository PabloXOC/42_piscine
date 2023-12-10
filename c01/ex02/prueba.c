/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:02:31 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/22 10:40:30 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	c;
	int	ch;
	int	*pntr1;
	int	*pntr2;

	c = 5;
	ch = 10;
	pntr1 = &c;
	pntr2 = &ch;
	ft_swap(pntr1, pntr2);
	printf("%d", c);
}
