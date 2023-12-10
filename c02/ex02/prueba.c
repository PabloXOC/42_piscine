/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:48:33 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/25 12:45:08 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 1;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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

	ret = ft_str_is_alpha(str);
	printf("%d", ret);
}
