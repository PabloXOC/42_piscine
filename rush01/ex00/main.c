/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:58:50 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/01 16:10:26 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_rightinput(char *str);
int		*ft_initial_assignment(int *array, char *str);
int		ft_putnbr_base(int nbr);
int		ft_conditions(int **array);
int		**ft_complete(int **array);
int		ft_compare_in_out(int **inside, int *outisde);
int		**int_to_4x4(int ba4, int **inside);
void	ft_write_result(int **array);
int		**make_matrix(void);

void	ft_try(int *outside, int **inside)
{
	int	nb;
	int	base_4;
	int	tf;

	nb = 25830;
	while (nb < 236310)
	{
		base_4 = ft_putnbr_base(nb);
		inside = int_to_4x4(base_4, inside);
		tf = ft_conditions(inside);
		if (tf == 0)
		{
			inside = ft_complete(inside);
			tf = ft_compare_in_out(inside, outside);
			if (tf == 0)
			{
				ft_write_result(inside);
				return ;
			}
		}
		nb++;
	}
	write(1, "Error\n", 6);
}

int	main(int argc, char *argv[])
{
	int	*outside;
	int	**inside;
	int	error;

	error = 1;
	if (argc > 1)
		error = ft_rightinput(argv[1]);
	if (argc != 2 || error != 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	outside = (int *)malloc(16 * 16);
	ft_initial_assignment(outside, argv[1]);
	inside = make_matrix();
	ft_try(outside, inside);
	free(outside);
	free(inside);
	return (0);
}
