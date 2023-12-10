/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:43:27 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/05 17:06:19 by pximenez         ###   ########.fr       */
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

int main(void)
{
	char	str1[30] = "";
	char	str2[10] = "";
	char	str3[30] = "";
	char	str4[10] = "";
	char	*pntr1;
	char	*pntr2;

	pntr1 = ft_strstr(str1, str2);
	printf("%s\n", pntr1);
	pntr2 = strstr(str3, str4);
	printf("%s\n", pntr2);
}
