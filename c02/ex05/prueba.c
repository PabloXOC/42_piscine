/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:05:45 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/26 10:15:36 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 1;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
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
	char	str[] = "";
	int		ret;

	ret = ft_str_is_uppercase(str);
	printf("%d", ret);
}
