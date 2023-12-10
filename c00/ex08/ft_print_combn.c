/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:35:06 by pablo             #+#    #+#             */
/*   Updated: 2023/10/18 15:32:09 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print(int *tab, int *tab_max, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &tab[i], 1);
		i++;
	}
	if (tab[0] != tab_max[0])
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	tab[10];
	int	tab_max[10];
	int	position;
	int	value;
	int	i;

	i = 0;
	while (i < n)
	{
		tab[i] = i + 48;
		tab_max[i] = 10 - n + i + 48;
		i++;
	}
	ft_print(tab, tab_max, n);
	while (tab[0] != tab_max[0])
	{
		position = n - 1;
		while (tab[position] == tab_max[position])
			position--;
		value = tab[position] + 1;
		while (position < n)
			tab[position++] = value++;
		ft_print(tab, tab_max, n);
	}
}

/* int	main(void)
{
	ft_print_combn(2);
} */
