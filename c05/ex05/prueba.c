/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:28:36 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/03 17:22:40 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	i = 3;
	while (i * i <= nb && i < 46341 && i <= nb / 3)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	int	nb;
	int	ret;

	nb = 100;
	ret = ft_sqrt(nb);
	printf("%d\n", ret);
}
