/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:41:52 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/10/12 13:52:03 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_characters
{
	char		*lines;
	char		empty;
	char		obstacle;
	char		full;
	int			line_int;
	int			len_lines;
}				t_characters;

typedef struct s_square
{
	int			x;
	int			y;
	int			dimensions;
}				t_square;

int				ft_tot_len(char *map);
int				ft_num_lines(char *map);
int				ft_len_line(char *map_str);
char			*ft_dump(char *map, int size, char *file_contents);
void			write_maps(char *map, char *map_str, char **array_map,
					t_characters parameters);
char			**ft_make_malloc(char *map, int i, char *map_str);
char			**write_in_array_map(char **array_map, char *map_str);
t_characters	write_in_parameters(t_characters parameters, char *map_str);
int				ft_len_lines(char *map_str);
int				ft_atoi(char *str);
int				**ft_make_int_malloc(char *map, int i, char *map_str);
int				**ft_find_sqr(char **array_map, t_characters parameters,
					char *map, char *map_str);
t_square		ft_find_biggest_sqr(t_characters parameters, int **big_sqr);
void			ft_mark_in_sqr(t_characters parameters, char **array_map,
					int **big_sqr);
void			ft_write_map(char **array_map, t_characters parameters);
void			free_char_pp(int n_lines, char **array);
void			free_int_pp(int n_lines, int **array);
void			ft_free(t_characters parameters, char **array_map,
					char *map_str);
void			ft_something(t_characters parameters, char **array_map,
					int **big_sqr);
void			evaluate_maps(char *map, char *map_str);
char			*map_to_str(char *map);
int				ft_compare_len(char **array_map, int i, int len,
					t_characters parameters);
int				ft_1_sqr(char *map_str, t_characters parameters);
int				ft_compare_char(t_characters parameters, char **array_map,
					int i, char *map);
int				ft_first_line_errors(char *map_str, int i, int counter);
void			map(char *map);
int				ft_errors(char *map_str, char **array_map, char *map);

#endif
