/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:51:55 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/27 19:18:56 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(char *str);
int	ft_base_from(char *str, int loop, char *base);
int	ft_b_len(int nbr, char *base);
int	ft_errors(char *base);
int	check_sign(char *nbr, int loop);

void	ft_rec(int nbr, char *base, char *str, int loop)
{
	int		rest;
	char	num_base;
	int		len;
	int		len2;

	len = ft_strlen(base);
	if (nbr > 0)
	{
		loop--;
		ft_rec(nbr / len, base, str, loop);
	}
	loop++;
	rest = (nbr % len);
	str[loop] = base[rest];
}

char	*ft_base_to(char *str, char *base_to, int number, int sign)
{
	int	loop;
	int	var;
	int	len;

	loop = 0;
	if (sign == 1)
	{
		loop++;
		str[0] = '-';
	}
	len = ft_b_len(number, base_to);
	ft_rec(number, base_to, str, len + loop - 1);
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		loop;
	char	*temp;
	int		sign;

	loop = 0;
	if (ft_errors(base_from) != 0 || ft_errors(base_to) != 0)
		return (0);
	while (nbr[loop] == 32 || nbr[loop] == '\t' || nbr[loop] == '\n'
		|| nbr[loop] == '\v' || nbr[loop] == '\f' || nbr[loop] == '\r')
		loop++;
	sign = check_sign(nbr, loop);
	while (nbr[loop] == '+' || nbr[loop] == '-')
		loop++;
	if (ft_base_from(nbr, loop, base_from) == -2147483648)
		return ("-2147483648");
	temp = (char *)malloc((ft_b_len(ft_base_from(nbr, loop, base_from),
					base_to) + sign + 1) * sizeof(char));
	if (!(temp))
	{
		free(temp);
		return (NULL);
	}
	temp[ft_b_len(ft_base_from(nbr, loop, base_from), base_to) + sign] = '\0';
	temp = ft_base_to(temp, base_to, ft_base_from(nbr, loop, base_from), sign);
	return (temp);
}

/* int	main(void)
{
	char	*ret;
	char	base_from[] = "0123456789";
	char	num[] = "   ---2147483648";
	char	base_to[] = "0123456789";

	ret = ft_convert_base(num, base_from, base_to);
	printf("%s\n", ret);
} */
