/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:56:09 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/10 18:29:18 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_atoi(char *str)
{
	int	loop;
	int	temp;

	temp = 0;
	loop = 0;
	while (str[loop] >= '0' && str[loop] <= '9')
	{
		temp = 10 * temp + str[loop] - '0';
		loop++;
	}
	return (temp);
}
