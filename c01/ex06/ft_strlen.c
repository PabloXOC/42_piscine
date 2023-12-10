/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:39:01 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/22 12:59:49 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

/*int	main(void)
{
	char	string[8] = "Fuckyou";
	char	*pntr;
	int		len;

	pntr = string;
	len = ft_strlen(pntr);
	printf("%d", len);
}*/
