/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 09:53:30 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/25 10:05:14 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	counter;

	counter = 1;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
		}
		else
		{
			return (0);
		}
		str = str + 1;
	}
	return (1);
}

int	main(void)
{
	char	str[] = "7484955656";
	int		ret;

	ret = ft_str_is_numeric(str);
	printf("%d", ret);
}
