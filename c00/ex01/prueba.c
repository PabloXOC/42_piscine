/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:36:07 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/21 09:01:15 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	dic;

	dic = 'a' ;
	while (dic <= 'z')
	{
		write(1, &dic, 1);
		dic++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
