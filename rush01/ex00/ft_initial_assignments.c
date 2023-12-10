/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initial_assignments.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:45:40 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/01 13:57:44 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_initial_assignment(int *array, char *str)
{
	int	loop;
	int	loop2;

	loop = 0;
	loop2 = 0;
	while (str[loop] != '\0')
	{
		while (str[loop] != 32 && loop2 < 16)
		{
			array[loop2] = str[loop] - 48;
			loop2++;
			loop++;
		}
		loop++;
	}
	return (array);
}
