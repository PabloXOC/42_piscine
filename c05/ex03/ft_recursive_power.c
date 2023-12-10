/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:46:43 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/02 21:59:20 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int pow)
{
	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, pow - 1));
}

/*int	main(void)
{
	int	nb;
	int	pow;
	int	ret;

	nb = 0;
	pow = -2;
	ret = ft_recursive_power(nb, pow);
	printf("%d\n", ret);
}*/
