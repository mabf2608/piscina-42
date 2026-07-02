/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 12:21:07 by mibonill          #+#    #+#             */
/*   Updated: 2026/07/02 12:13:52 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_to_10(long num_l)
{
	char	temp[10];
	int		nb;

	nb = 0;
	if (num_l == 0)
		write (1, "0", 1);
	else
	{
		if (num_l < 0)
		{
			num_l = num_l * -1;
			write (1, "-", 1);
		}
		while (num_l != 0)
		{
			temp[nb] = (num_l % 10) + '0';
			num_l = num_l / 10;
			nb++;
		}
		nb = nb -1;
	}
	while (nb >= 0)
	{
		write(1, &temp[nb], 1);
		nb--;
	}
}

void	ft_to_binary(long num_l)
{
	char	aux[32];
	int		i;

	i=0;
	while (num_l > 0)
	{
		aux[i] = (num_l % 2) + '0';
		num_l = num_l / 2;
		i++;
	}

	i--;
	while (i>=0)
	{
		write(1, &aux[i], 1);
		i--;
	}
}
//char	*ft_to_hex(int nbr);
//char	*ft_to_octal(int nbr);

//void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
    ft_to_10(1234566);
	return (0);
}

//Usa un array con las diferentes bases
//base 10, binario, hexadecimal, octal
//controlar numeros negativos
//si se da parametro invalido controlar errores
