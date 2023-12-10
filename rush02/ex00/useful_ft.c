/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   useful_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:24:12 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/29 21:11:26 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_putnbr(int nb, int len, char *str)
{
	int	rest;

	if (nb > 9)
		ft_putnbr(nb / 10, len - 1, str);
	rest = nb % 10;
	rest = rest + 48;
	str[len] = rest;
	return (str);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	loop;

	loop = 0;
	while (s1[loop] != '\0' && s2[loop] != '\0')
	{
		if (s1[loop] != s2[loop])
			return (s1[loop] - s2[loop]);
		loop++;
	}
	if (s1[loop] != '\0')
		return (s1[loop] - s2[loop]);
	if (s2[loop] != '\0')
		return (s1[loop] - s2[loop]);
	return (0);
}

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
