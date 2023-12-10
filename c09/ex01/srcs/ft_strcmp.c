/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:39:35 by pximenez          #+#    #+#             */
/*   Updated: 2023/11/02 13:38:58 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	loop;

	loop = 0;
	while (s1[loop] != '\0' && s2[loop] != '\0')
	{
		if (s1[loop] != s2[loop])
			return (s1[loop] - s2[loop]);
		loop++;
	}
	if (s1[loop] != '\0')
		return (s1[loop] - s2[loop]);
	if (s2[loop] != '\0')
		return (s1[loop] - s2[loop]);
	return (0);
}
