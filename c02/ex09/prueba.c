/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:01:43 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/26 14:21:14 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	counter;
	int	loop;

	loop = 0;
	counter = 1;
	while (str[loop] != '\0')
	{
		if (str[loop] >= 'A' && str[loop] <= 'Z')
			str[loop] = str[loop] + 32;
		if (str[loop] >= 'a' && str[loop] <= 'z' && counter == 1)
			str[loop] = str[loop] - 32;
		if ((str[loop] < 48 && str[loop] >= 32) || (str[loop] > 57
				&& str[loop] < 65) || (str[loop] > 90 && str[loop] < 97)
			|| (str[loop] > 122 && str[loop] < 127))
		{
			counter = 0;
		}
		counter++;
		loop++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "hola9898 989FG BJDF GBJ adf-fasdf ad+adf s;!!!";
	ft_strcapitalize(str);
	printf("%s", str);
}
