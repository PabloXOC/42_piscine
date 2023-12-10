/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:26:58 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/26 10:15:25 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	loop;

	loop = 0;
	while (src[loop] != '\0')
	{
		dest[loop] = src[loop];
		loop++;
	}
	dest[loop] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[1];
	char	src[9] = "holahola";

	ft_strcpy(dest, src);
	printf("%s", dest);
}
