/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:26:58 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/18 15:48:00 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	loop;

	if (n == 0)
	{
		return (0);
	}
	loop = 0;
	while (loop < n && src[loop] != '\0')
	{
		dest[loop] = src[loop];
		loop++;
	}
	dest[loop] = '\0';
	while (src[loop] != '\0')
	{
		loop++;
	}
	return (loop);
}

int	main(void)
{
	char	dest1[20] = "hello";
	char	src1[30] = "hodfhdfgdgsfdgsgfsdfsa";
	char	dest2[20] = "hello";
	char	src2[30] = "hodfhdfgdgsfdgsgfsdfsa";
	int		n;
	int		length;

	n = 3;
	length = ft_strlcpy(dest1, src1, n);
	printf("MINE : << %d , %s >>\n", length, dest1);
	length = strlcpy(dest2, src2, n);
	printf("ORIGINAL : << %d , %s >>\n", length, dest2);
}
