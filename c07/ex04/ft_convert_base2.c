/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:51:55 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/27 19:18:49 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str = str + 1;
		len++;
	}
	return (len);
}

int	ft_base_from(char *str, int loop, char *base)
{
	int	temp;
	int	len;
	int	loop2;
	int	var;

	temp = 0;
	len = ft_strlen(base);
	while (str[loop] != '\0')
	{
		var = 0;
		loop2 = 0;
		while (loop2 <= len)
		{
			if (str[loop] == base[loop2])
			{
				temp = temp * len + loop2;
				var = 1;
			}
			loop2++;
		}
		if (var == 0)
			return (temp);
		loop++;
	}
	return (temp);
}

int	ft_b_len(int nbr, char *base)
{
	int	len;
	int	base_len;

	base_len = ft_strlen(base);
	len = 0;
	while (nbr > 0)
	{
		nbr = nbr / base_len;
		len++;
	}
	return (len);
}

int	ft_errors(char *base)
{
	int	loop;
	int	loop2;

	loop = 0;
	while (base[loop] != '\0')
	{
		loop2 = loop + 1;
		if (base[loop] == '+' || base[loop] == '-' || base[loop] == 32
			|| base[loop] == '\t' || base[loop] == '\n' || base[loop] == '\v'
			|| base[loop] == '\f' || base[loop] == '\r')
			return (1);
		while (base[loop2] != '\0')
		{
			if (base[loop] == base[loop2])
				return (1);
			loop2++;
		}
		loop++;
	}
	if (loop < 2)
		return (1);
	return (0);
}

int	check_sign(char *nbr, int loop)
{
	int	sign;

	sign = 1;
	while (nbr[loop] == '+' || nbr[loop] == '-')
	{
		if (nbr[loop] == '-')
			sign = sign * -1;
		loop++;
	}
	if (sign == 1)
		return (0);
	else
		return (1);
}
