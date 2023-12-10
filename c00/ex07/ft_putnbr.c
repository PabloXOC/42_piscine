/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:09:05 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/02 11:17:10 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_recursive_write(int nb)
{
	int	rest;

	if (nb > 9)
	{
		ft_recursive_write(nb / 10);
	}
	rest = nb % 10;
	rest = rest + 48;
	write(1, &rest, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	ft_recursive_write(nb);
}

/*int	main(void)
{
	int	var;

	var = -2147483648;
	ft_putnbr(var);
}*/
