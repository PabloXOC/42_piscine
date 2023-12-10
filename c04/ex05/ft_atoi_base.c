/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:08:36 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/25 12:30:55 by pablo            ###   ########.fr       */
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

int	ft_base(char *str, int loop, char *base)
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

int	ft_errors(char *base)
{
	int	loop;
	int	loop2;
	int	len;

	loop = 0;
	len = 0;
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
			{
				return (2);
			}
			loop2++;
		}
		loop++;
		len++;
	}
	if (len < 2)
		return (3);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	loop;
	int	error;
	int	temp;

	loop = 0;
	sign = 1;
	error = ft_errors(base);
	if (error != 0)
		return (0);
	while (str[loop] == 32 || str[loop] == '\t' || str[loop] == '\n'
		|| str[loop] == '\v' || str[loop] == '\f' || str[loop] == '\r')
		loop++;
	while (str[loop] == '+' || str[loop] == '-')
	{
		if (str[loop] == '-')
			sign = sign * -1;
		loop++;
	}
	temp = ft_base(str, loop, base);
	return (temp * sign);
}

/* int	main(void)
{
	int		ret;
	char	base[] = "0123456789ABCDEF";
	char	num[] = "   ---A";

	ret = ft_atoi_base(num, base);
	printf("%d\n", ret);
} */
