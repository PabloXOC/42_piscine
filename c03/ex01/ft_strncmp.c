/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:43:16 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/27 18:14:48 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	loop;

	loop = 0;
	while (n > loop && s1[loop] != '\0' && s2[loop] != '\0')
	{
		if (s1[loop] != s2[loop])
			return (s1[loop] - s2[loop]);
		loop++;
	}
	if (n != loop)
	{
		if (s1[loop] != '\0' && s2[loop] == '\0')
			return (s1[loop] - s2[loop]);
		if (s2[loop] != '\0' && s1[loop] == '\0')
			return (s1[loop] - s2[loop]);
	}
	return (0);
}

/*int main(void)
{
	char			str1[10] = "halbla77s";
	char			str2[10] = "halb";
	unsigned int	n;
	int				ret;

	n = 4;
	ret = ft_strncmp(str1, str2, n);
	printf("%d\n", ret);
	ret = strncmp(str1, str2, n);
	printf("%d\n", ret);
}*/
