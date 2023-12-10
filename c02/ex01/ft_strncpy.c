/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:31:47 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/26 14:18:17 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	loop;

	loop = 0;
	while (loop < n && src[loop] != '\0')
	{
		dest[loop] = src[loop];
		loop++;
	}
	while (loop < n)
	{
		dest[loop] = '\0';
		loop++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[] = "fasdfsadgffhasfasdkjfskadfbjkasdfjkasdbfs";
	char	src[] = "hodfhdfgdgsfdgsgfsdfsa";
	int		n;

	n = 90;
	ft_strncpy(dest, src, n);
	printf("%s\n", dest[30]);
}*/
