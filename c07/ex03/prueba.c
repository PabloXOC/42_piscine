/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:48:13 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/10 16:12:19 by pximenez         ###   ########.fr       */
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

int	get_len(char **str, char *sep, int size)
{
	int	len;
	int	loop;

	len = 0;
	loop = 0;
	while (loop < size)
	{
		len = len + ft_strlen(str[loop]);
		loop++;
	}
	len = len + (size - 1) * ft_strlen(sep);
	return (len);
}

int	ft_give_values(char **strs, int loop, int len, char	*ret)
{
	int	loop2;

	loop2 = 0;
	while (strs[loop][loop2] != '\0')
	{
		ret[len] = strs[loop][loop2];
		loop2++;
		len++;
	}
	return (len);
}

int	ft_give_spcs(char *sep, int len, char	*ret)
{
	int	loop2;

	loop2 = 0;
	while (sep[loop2] != '\0')
	{
		ret[len] = sep[loop2];
		len++;
		loop2++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		len;
	int		loop;

	if (size == 0)
		return ((char *)malloc(0 * sizeof(char)));
	len = get_len(strs, sep, size);
	ret = (char *)malloc(len * sizeof(char));
	if (!(ret))
	{
		return (ret);
	}
	loop = 0;
	len = 0;
	while (loop < size)
	{
		len = ft_give_values(strs, loop, len, ret);
		if (loop < size - 1)
			len = ft_give_spcs(sep, len, ret);
		loop++;
	}
	ret[len] = '\0';
	return (ret);
}

int	main(void)
{
	int		size;
	char	**strs;
	char	*sep = ". .";
	char	*ret;

	strs = (char **)malloc(4 * 100);
	strs[0] = "hola";
	strs[1] = "ho";
	strs[2] = "pablo";
	strs[3] = "feo";
	size = 4;
	ret = ft_strjoin(size, strs, sep);
	printf("%s", ret);
}
