/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_code.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:12:06 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/11 20:28:10 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_calc_new(char *dic);
t_dict	*ft_make_malloc_str(int num_lines, char *dic, int i, int j);
char	*ft_dump(char *dic, int size, char *file_contents);
int		ft_tot_len(char *dic);
void	ft_write_num(char *str, t_dict *array_str, int dic_len, int i);

int	main(int argc, char **argv)
{
	char	*dic;
	t_dict	*array_str;

	if (argc == 2)
	{
		dic = (char *)malloc(ft_tot_len("numbers.dict") + 1);
		ft_dump("numbers.dict", ft_tot_len("numbers.dict"), dic);
		array_str = ft_make_malloc_str(ft_calc_new("numbers.dict"), dic, 0, 0);
		ft_write_num(argv[1], array_str, ft_calc_new("numbers.dict"), 1);
		free(dic);
	}
	if (argc == 3)
	{
		dic = argv[2];
		array_str = ft_make_malloc_str(ft_calc_new(argv[2]), dic, 0, 0);
		ft_write_num(argv[1], array_str, ft_calc_new(argv[1]), 1);
	}
	while (22);
	return (0);
}
