/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:15:14 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/20 18:32:43 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_make_base(char *base)
{
	char	c;
	int		i;

	c = '0';
	i = 0;
	while (c <= '9')
		base[i++] = c++;
	c = 'a';
	while (c <= 'f')
		base[i++] = c++;
	return (base);

}

void	ft_rec(char c, char *base)
{
	int		rest;
	char	value;

	if (c > 0)
		ft_rec(c / 16, base);
	rest = (c % 16);
	value = base[rest];
	write(1, &value, 1);
}

void	ft_strcapitalize(char *str)
{
	int		i;
	char	base[17];

	ft_make_base(base);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			ft_rec(str[i], base);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[22] = "Coucou\ntu vas bien ?";

	ft_strcapitalize(str);
}
