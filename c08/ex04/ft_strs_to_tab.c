/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:31:01 by pximenez          #+#    #+#             */
/*   Updated: 2023/11/02 13:32:36 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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
	output = (char *)malloc((len + 1) * sizeof(char));
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*hola;

	hola = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!hola)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		hola[i].size = ft_strlen(av[i]);
		hola[i].str = ft_strdup(av[i]);
		hola[i].copy = ft_strdup(av[i]);
		i++;
	}
	hola[i].size = 0;
	hola[i].str = 0;
	hola[i].copy = 0;
	return (hola);
}

/* int	main(int argc, char **argv)
{
	t_stock_str	*hh;
	int			i;

	argv = argv + 1;
	hh = ft_strs_to_tab(argc - 1, argv);
	for (i = 0; i <= argc - 1; i++)
		printf("%d %s %s\n", hh[i].size, hh[i].str, hh[i].copy);
	return (0);
} */
