/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:04:27 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/25 15:31:17 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	counter;

	counter = 1;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
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

/*int	main(void)
{
	char	str[] = "";
	int		ret;

	ret = ft_str_is_lowercase(str);
	printf("%d", ret);
}*/
