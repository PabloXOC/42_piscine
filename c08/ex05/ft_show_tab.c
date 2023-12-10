/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:09:23 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/12 18:29:03 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:31:01 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/12 18:08:59 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str = str + 1;
	}
}

void	ft_recursive_write(int nb)
{
	int	rest;

	if (nb > 9)
	{
		ft_recursive_write(nb / 10);
	}
	rest = nb % 10;
	rest = rest + 48;
	write(1, &rest, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	ft_recursive_write(nb);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str = str + 1;
		len++;
	}
	return (len);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

/* void ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			len;
	t_stock_str	*hola;

	hola = (t_stock_str *)malloc(ac * sizeof(t_stock_str));
	if (!hola)
	{
		hola = NULL;
	}
	i = 0;
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		hola[i].size = len;
		hola[i].str = av[i];
		hola[i].copy = av[i];
		i++;
	}
	hola[i].size = 0;
	hola[i].str = 0;
	hola[i].copy = 0;
	ft_show_tab(hola);
}

int	main(void)
{
	char		**av;
	int			ac;
	t_stock_str	*hh;
	int			i;

	av[0] = "hola";
	av[1] = "sois";
	av[2] = "feopjs";
	ac = 3;
	ft_strs_to_tab(ac, av);
	return (0);
}
 */