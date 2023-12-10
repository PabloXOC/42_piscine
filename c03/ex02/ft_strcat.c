/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:09:52 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/27 18:15:04 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	loop;
	int	loop2;

	loop = 0;
	loop2 = 0;
	while (dest[loop] != '\0')
		loop++;
	while (src[loop2] != '\0')
	{
		dest[loop] = src[loop2];
		loop2++;
		loop++;
	}
	dest[loop] = '\0';
	return (dest);
}

/*int main(void)
{
	char	str1[40] = "hollas";
	char	str2[15] = "hozA";
	char	str3[40] = "hollas";
	char	str4[15] = "hozA";

	ft_strcat(str1, str2);
	printf("%s\n", str1);

	strcat(str3, str4);
	printf("%s\n", str3);
}*/
