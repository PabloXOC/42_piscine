/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pximenez <pximenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:25:44 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/05 18:54:46 by pximenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

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

void	ft_compare(int argc, char	**argvs)
{
	int		i;
	int		j;
	int		ret;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc - 1)
		{
			ret = ft_strcmp(argvs [j], argvs [j + 1]);
			if (ret > 0)
			{
				temp = argvs[j];
				argvs[j] = argvs[j + 1];
				argvs[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	ft_compare(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
