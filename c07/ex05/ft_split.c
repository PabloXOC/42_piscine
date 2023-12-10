/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:19:22 by pablo             #+#    #+#             */
/*   Updated: 2023/10/27 20:40:36 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_check_values(char *str, char *sep, int i)
{
	int	j;

	j = 0;
	while (sep[j] != '\0')
	{
		if (sep[j] == str[i])
			return (1);
		j++;
	}
	return (0);
}

int	ft_c_w(char *str, char *sep)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (ft_check_values(str, sep, i) == 0)
		counter = 1;
	while (str[i] != '\0')
	{
		if (ft_check_values(str, sep, i) == 1)
		{
			while (ft_check_values(str, sep, i) == 1 && str[i] != '\0')
				i++;
			if (str[i] != '\0')
				counter++;
		}
		i++;
	}
	return (counter);
}

int	a(char *str, char *sep, int i)
{
	int	count;

	count = 0;
	while (ft_check_values(str, sep, i))
	{
		count++;
		i++;
	}
}

char	**ft_norm(char *str, char *charset, char **words, int i)
{
	int	j;
	int	loop;

	j = 0;
	loop = 0;
	while (str[i] != '\0')
	{
		if (ft_check_values(str, charset, i) == 1)
		{
			while (ft_check_values(str, charset, i) == 1 && str[i] != '\0')
				i++;
			if (loop != 0)
			{
				words[j][loop] = '\0';
				j++;
			}
			words[j] = (char *)malloc((a(str, charset, i) + 1) * sizeof(char));
			loop = 0;
		}
		words[j][loop] = str[i];
		i++;
		loop++;
	}
	words[j + 1] == 0;
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;

	words = (char **)malloc((ft_c_w(str, charset) + 1) * sizeof(char *));
	if (ft_check_values(str, charset, 0) == 0)
		words[0] = (char *)malloc((a(str, charset, 0) + 1) * sizeof(char));
	words = ft_norm(str, charset, words, 0);
	return (words);
}

/* int	main(void)
{
	char	str[] = "hola .  que tal ....  estas";
	char	sep[] = " .";
	char	**result;
	int		words;
	int		i;

	result = ft_split(str, sep);
	words = ft_c_w(str, sep);
	printf("%d\n", words);
	i = 0;
	while (result[i] != 0)
	{
		printf("%s\n", result[i]);
		i++;
	}
} */
