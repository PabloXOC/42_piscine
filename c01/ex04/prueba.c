/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:56:12 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/22 11:02:04 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int *a, int *b)
{
	int	d;
	int	r;

	d = *a / *b;
	r = *a % *b;
	*a = d;
	*b = r;
}

int	main(void)
{
	int	num;
	int	num2;
	int	*pntr1;
	int	*pntr2;

	num = 59234;
	num2 = 123;
	pntr1 = &num;
	pntr2 = &num2;
	ft_div_mod(pntr1, pntr2);
	printf("%d", num2);
}
