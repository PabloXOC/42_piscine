/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:51:04 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/27 18:55:30 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_len(char	*string)
{
	int	buc;

	buc = 0;
	while (string[buc] != '\0')
		buc++;
	return (buc);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	loop;
	unsigned int	loop2;
	unsigned int	size_src;
	unsigned int	size_dest;

	size_src = ft_len(src);
	size_dest = ft_len(dest);
	loop = size_dest;
	loop2 = 0;
	if (size > size_dest)
	{
		while (src[loop2] != 0 && (size - size_dest -1 > loop2))
		{
			dest[loop] = src[loop2];
			loop2++;
			loop++;
		}
		dest[loop] = '\0';
		return (size_dest + size_src);
	}
	dest[loop] = '\0';
	return (size + size_src);
}

/*int	main(void)
{
	char			str1[15] = "hola";
	char			str2[20] = "muybuenas";
	char			str3[15] = "hola";
	char			str4[20] = "muybuenas";
	unsigned int	n;
	int				ret;

	n = 12;
	ret = ft_strlcat(str1, str2, n);
	printf("%d", ret);
	printf("%s\n", str1);
	ret = strlcat(str3, str4, n);
	printf("%d", ret);
	printf("%s\n", str3);
}*/
