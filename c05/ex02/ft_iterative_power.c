/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:46:43 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/02 21:59:31 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int pow)
{
	int	res;

	res = 1;
	if (pow < 0)
		return (0);
	while (pow > 0)
	{
		res = res * nb;
		pow--;
	}
	return (res);
}

/*int	main(void)
{
	int	nb;
	int	pow;
	int	ret;

	nb = 5;
	pow = 3;
	ret = ft_iterative_power(nb, pow);
	printf("%d\n", ret);
}*/
