/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 17:39:11 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/23 17:39:15 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_rev(int nb, char arr[])
{
	while (nb >= 0)
	{
		write (1, &arr[nb], 1);
		nb --;
	}
}

void	ft_putnbr(int nb)
{
	long	num;
	char	arr[10];

	if (nb == 0)
		write (1, "0", 1);
	else
	{
		num = nb;
		nb = 0;
		if (num < 0)
		{
			num = num * -1;
			write (1, "-", 1);
		}
		while (num > 0)
		{
			arr[nb] = num % 10 + '0';
			num = num / 10;
			nb++;
		}
		nb = nb - 1;
		ft_print_rev(nb, arr);
	}
}
