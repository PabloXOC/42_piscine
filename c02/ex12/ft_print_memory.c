/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:47:58 by pablo             #+#    #+#             */
/*   Updated: 2023/10/25 12:33:55 by pablo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdio.h>
#include <unistd.h> // for the write system call

void	hexdigits(unsigned char *byteptr, size_t i, size_t size)
{
	char	hexdigits[17];
	char	buffer[3];
	char	c;
	int		loop;

	c = '0';
	loop = 0;
	while (c <= '9')
		hexdigits[loop++] = c++;
	c = 'a';
	while (c <= 'f')
		hexdigits[loop++] = c++;
	loop = i;
	while (loop < i + 16)
	{
		buffer[0] = hexdigits[byteptr[loop] >> 4];
		buffer[1] = hexdigits[byteptr[loop] & 0x0F];
		if (loop <= size)
			write(1, buffer, 2);
		else
			write(1, "  ", 2);
		if ((loop + 1) % 2 == 0)
			write(1, " ", 1);
		loop++;
	}
}

void	ft_rec(unsigned long long nbr)
{
	int		rest;
	char	num_base;
	char	base[17];
	char	c;
	int		loop;

	c = '0';
	loop = 0;
	while (c <= '9')
		base[loop++] = c++;
	c = 'a';
	while (c <= 'f')
		base[loop++] = c++;
	if (nbr > 15)
		ft_rec(nbr / 16);
	rest = (nbr % 16);
	num_base = base[rest];
	write(1, &num_base, 1);
}

void	ft_hex(unsigned long long addres)
{
	unsigned long long	temp;
	int					loop;

	temp = addres;
	loop = 0;
	while (loop < 13)
	{
		temp = temp / 16;
		if (temp < 16)
			write(1, "0", 1);
		loop++;
	}
	ft_rec(addres);
}

void	*ft_print_memory(void *addr, size_t size)
{
	unsigned char	*byteptr;
	size_t			i;
	size_t			loop;

	byteptr = addr;
	i = 0;
	while (i < size)
	{
		ft_hex((unsigned long long)(addr + i));
		write(1, " : ", 3);
		hexdigits(byteptr, i, size);
		loop = i;
		while (loop < i + 16 && loop <= size)
		{
			if (!(byteptr[loop] > 31 && byteptr[loop] < 127))
				byteptr[loop] = '.';
			write(1, &byteptr[loop], 1);
			loop++;
		}
		write(1, "\n", 1);
		i += 16;
	}
}

/* int	main(void)
{
	char str[150] = "El contenido en hexad\necimal, con un espacio cada dos caracteres, deberá ser completado con espacios si es preciso (ver el ejemplo a continuacion).";
	char hola[0];
	ft_print_memory(str, sizeof(str));
	//ft_print_memory(hola, sizeof(hola));
	return (0);
} */
