/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:30:34 by pximenez          #+#    #+#             */
/*   Updated: 2023/09/26 15:54:43 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	loop;

	loop = 0;
	while (str[loop] != '\0')
	{
		if (str[loop] < 32 || str[loop] > 126)
			return (0);
		loop++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "hola";
	int		ret;

	ret = ft_str_is_printable(str);
	printf("%d", ret);
}*/
