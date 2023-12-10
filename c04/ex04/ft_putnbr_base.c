/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:44:12 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/02 11:16:38 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rec(int nbr, int len, char *base)
{
	int		rest;
	char	num_base;

	if (nbr > len - 1)
		ft_rec(nbr / len, len, base);
	rest = (nbr % len);
	num_base = base[rest];
	write(1, &num_base, 1);
}

int	ft_errors(char *base)
{
	int	loop;
	int	loop2;
	int	len;

	loop = 0;
	len = 0;
	while (base[loop] != '\0')
	{
		loop2 = loop + 1;
		if (base[loop] == '+' || base[loop] == '-')
			return (1);
		while (base[loop2] != '\0')
		{
			if (base[loop] == base[loop2])
			{
				return (2);
			}
			loop2++;
		}
		loop++;
		len++;
	}
	if (len < 2)
		return (3);
	return (0);
}

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

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	var;
	int	resto;
	int	error;

	error = ft_errors(base);
	if (error > 0)
		return ;
	len = ft_strlen(base);
	var = 0;
	if (nbr == -2147483648)
	{
		var = 1;
		resto = nbr % len * -1;
		nbr = nbr / len;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -1 * nbr;
	}
	ft_rec(nbr, len, base);
	if (var == 1)
		ft_rec(resto, len, base);
}

/*int	main(void)
{
	int		num;
	char	base[] = "alkhb";

	num = -2147483648;
	ft_putnbr_base(num, base);
}*/
