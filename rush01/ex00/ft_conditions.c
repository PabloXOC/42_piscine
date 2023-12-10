/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conditions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:31:23 by juestrel          #+#    #+#             */
/*   Updated: 2023/10/01 17:20:04 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_conditions(int **array)
{
	if (((array[0][0] != array[0][1]) && (array[0][1] != array[0][2])
			&& (array[0][2] != array[0][0]) && (array[1][0] != array[1][1])
			&& (array[1][1] != array[1][2]) && (array[1][2] != array[1][0])
			&& (array[2][0] != array[2][1]) && (array[2][1] != array[2][2])
			&& (array[2][2] != array[2][0])) && ((array[0][0] != array[1][0])
			&& (array[1][0] != array[2][0]) && (array[2][0] != array[0][0])
			&& (array[0][1] != array[1][1]) && (array[1][1] != array[2][1])
			&& (array[2][1] != array[0][1]) && (array[0][2] != array[1][2])
			&& (array[1][2] != array[2][2]) && (array[2][2] != array[0][2]))
		&& ((array[0][0] + array[0][1] + array[0][2] != array[1][0]
				+ array[1][1] + array[1][2]) && (array[0][0] + array[0][1]
				+ array[0][2] != array[2][0] + array[2][1] + array[2][2])
			&& (array[1][0] + array[1][1] + array[1][2] != array[2][0]
				+ array[2][1] + array[2][2])) &&
		((array[0][0] + array[1][0] + array[2][0] != array[0][1] + array[1][1]
				+ array[2][1]) && (array[0][0] + array[1][0]
				+ array[2][0] != array[0][2] + array[1][2] + array[2][2])
			&& (array[0][1] + array[1][1] + array[2][1] != array[0][2]
				+ array[1][2] + array[2][2])))
		return (0);
	return (1);
}
