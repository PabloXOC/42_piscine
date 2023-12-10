/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:42:17 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/27 18:51:22 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

/*int main(void)
{
	char    str1[] = "hola";
	char    str2[] = "holaa";
	int		ret;

	ret = ft_strcmp(str1, str2);
	printf("%d\n", ret);
	ret = strcmp(str1, str2);
	printf("%d\n", ret);
}*/
