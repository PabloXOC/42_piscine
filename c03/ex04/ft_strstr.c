/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:31:06 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/27 18:51:48 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	loop;
	int	loop_str;
	int	loop_str_2;

	if (*to_find == '\0')
		return (str);
	loop_str = 0;
	while (str[loop_str] != '\0')
	{
		loop_str_2 = loop_str;
		loop = 0;
		while (str[loop_str_2] == to_find[loop])
		{
			if (to_find[loop + 1] == '\0')
				return (&str[loop_str]);
			loop++;
			loop_str_2++;
		}
		loop_str++;
	}
	return (NULL);
}

/*int main(void)
{
	char	str1[30] = "hola que tal";
	char	str2[10] = "l";
	char	str3[30] = "hola que tal";
	char	str4[10] = "l";
	char	*pntr1;
	char	*pntr2;

	pntr1 = ft_strstr(str1, str2);
	printf("%s\n", pntr1);
	pntr2 = strstr(str3, str4);
	printf("%s\n", pntr2);
}*/
