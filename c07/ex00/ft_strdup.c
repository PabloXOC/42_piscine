/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:46:58 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/06 11:37:45 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int		len;

	len = 0;
	while (*str != '\0')
	{
		str = str + 1;
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*output;

	len = ft_strlen(src);
	output = (char *)malloc(len * sizeof(char));
	if (!output)
		return (NULL);
	len = 0;
	while (src[len] != '\0')
	{
		output[len] = src[len];
		len++;
	}
	output[len] = '\0';
	return (output);
}

/* int	main(void)
{
	char	src[] = "holaquetal";
	char	*dest;

	dest = strdup(src);
	printf("%s\n", dest);
} */
