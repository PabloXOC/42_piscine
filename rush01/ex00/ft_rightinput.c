/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rightinput.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:39:01 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/01 19:24:47 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_rightinput(char	*str)
{
	int		len;
	int		loop;

	len = 0;
	loop = 0;
	while (str[loop] != '\0')
	{
		loop++;
		len++;
	}
	if (len != 31)
		return (1);
	loop = 0;
	while (str[loop] != '\0')
	{
		if (!(str[loop] >= '1' && str[loop] <= '4'))
			return (2);
		loop++;
		if (!(str[loop] == 32 || str[loop] == '\0'))
			return (3);
		if (str[loop] != '\0')
			loop++;
	}
	return (0);
}
