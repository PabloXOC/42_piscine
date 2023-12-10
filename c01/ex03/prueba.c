/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:02:31 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/22 10:48:28 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	num;
	int	num2;
	int	division;
	int	resto;
	int	*pntr1;
	int	*pntr2;

	num = 59234;
	num2 = 123;
	pntr1 = &division;
	pntr2 = &resto;
	ft_div_mod(num, num2, pntr1, pntr2);
	printf("%d", resto);
}
