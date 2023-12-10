/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:29:20 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/18 15:33:10 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

/*int	main(void)
{
	char	dest[] = "";
	char	src[] = "hodfhdfgdgsfdgsgfsdfsa";
	int		n;
	int		length;

	n = 0;
	length = ft_strlcpy(dest, src, n);
	printf("%d", length);
}*/
