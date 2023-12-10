/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:09:52 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/27 18:15:08 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	loop;
	unsigned int	loop2;

	loop = 0;
	loop2 = 0;
	while (dest[loop] != '\0' )
		loop++;
	while (src[loop2] != '\0' && loop2 < nb)
	{
		dest[loop] = src[loop2];
		loop2++;
		loop++;
	}
	dest[loop] = '\0';
	return (dest);
}

int main(void)
{
	char	str1[20] = "hofgdgfgllas";
	char	str2[15] = "hozAadsfasdf";
	char	str3[20] = "hofgdgfgllas";
	char	str4[15] = "hozAadsfasdf";
	int n;

	n = 7;
	ft_strncat(str1, str2, n);
	printf("%s\n", str1);

	strncat(str3, str4, n);
	printf("%s\n", str3);
}
