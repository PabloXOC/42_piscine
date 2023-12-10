/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:36:33 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/02 11:45:18 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	sol;

	if (nb < 0)
		return (0);
	sol = 1;
	while (nb != 0)
	{
		sol = sol * nb;
		nb--;
	}
	return (sol);
}

int	main(void)
{
	int	nb;
	int	ret;

	nb = 8;
	ret = ft_iterative_factorial(nb);
	printf("%d", ret);
}
