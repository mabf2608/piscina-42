/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 12:21:07 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/30 20:22:31 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_to_10(long num_l);
char	*ft_to_binary(long num_l, char **temp)
{
	int		i;
	int		aux;

	i = 32;
	while (num_l > 0)
	{
		aux = (num_l % 2) + '0';
		temp[i] = aux + '0';
		num_l = num_l / 10;
		i--;
	}
	return (temp);
}
char	*ft_to_hex(int nbr);
char	*ft_to_octal(int nbr);

void	ft_putnbr_base(int nbr, char *base)
{	
	char	*temp[32];
	char	*arr_b[4];
	long	num_l;
	//int		is_neg;	
	
	//is_neg = 0;
	num_l = nbr;
	nbr = 0;
	if (num_l < 0)
	{	
		num_l = num_l * -1; 
		//is_neg = 1;
	}
	arr_b[0] = "0123456789";
	arr_b[1] = "01";
	arr_b[2] = "0123456789ABCDEF";
	arr_b[3] = "poneyguay";

	if (arr_b[1] == base)
		temp = (ft_to_binary(num_l, temp));

	while (temp[nbr] != '\0')
	{
		write (1,temp[nbr], 1);
		nbr++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1 && argv[1][0] != '\0')
		ft_putnbr_base(argv[1][0], "01");
	return (0);
}

//Usa un array con las diferentes bases
//base 10, binario, hexadecimal, octal
//controlar numeros negativos
//si se da parametro invalido controlar errores
