/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 12:21:07 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/30 12:57:56 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_to_10(long num_l);
char	*ft_to_binary(long num_l)
{
	char	str[10];
	int		i;

	i = 0;
	while (num_l > 0)
	{
		str[i] = (num_l % 2) + '0';
		num_l = num_l / 10;
	}
	return (str);
}
char	*ft_to_hex(int nbr);
char	*ft_to_octal(int nbr);

void	ft_putnbr_base(int nbr, char *base)
{
	char	*arr_b[4];
	long	num_l;
	int		is_neg;
	
	is_neg = 0;
	num_l = nbr;
	if (num_l < 0)
	{	
		num_l = num_l * -1; 
		is_neg = 1;
	}
	arr_b[0] = "0123456789";
	arr_b[1] = "01";
	arr_b[2] = "0123456789ABCDEF";
	arr_b[3] = "poneyguay";

}

//Usa un array con las diferentes bases
//base 10, binario, hexadecimal, octal
//controlar numeros negativos
//si se da parametro invalido controlar errores
