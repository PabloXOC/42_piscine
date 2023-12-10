/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:52:24 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/06 11:53:10 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	loop;
	int	temp;

	temp = 0;
	loop = 0;
	sign = 1;
	while (str[loop] == 32 || str[loop] == '\t' || str[loop] == '\n'
		|| str[loop] == '\v' || str[loop] == '\f' || str[loop] == '\r')
		loop++;
	while (str[loop] == '+' || str[loop] == '-')
	{
		if (str[loop] == '-')
			sign = sign * -1;
		loop++;
	}
	while (str[loop] >= '0' && str[loop] <= '9')
	{
		temp = 10 * temp + str[loop] - '0';
		loop++;
	}
	return (temp * sign);
}

int	main(void)
{
	int	ret;

	ret = ft_atoi("  -2147483648");
	ret = atoi(" \f\n  -889");
	printf("%d\n", ret);
}
