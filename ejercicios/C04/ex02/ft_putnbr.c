/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 11:01:04 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/29 11:55:55 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnbr(char *temp, int nb)
{
	while (nb >= 0)
	{
		write (1, &temp[nb], 1);
		nb--;
	}
}

void	ft_putnbr(int nb)
{
	long	nl;
	char	temp[10];

	if (nb == 0)
		write (1, "0", 1);
	else
	{
		nl = nb;
		nb = 0;
		if (nl < 0)
		{
			nl = nl * -1;
			write (1, "-", 1);
		}
		while (nl != 0)
		{
			temp[nb] = (nl % 10) + '0';
			nl = nl / 10;
			nb++;
		}
		nb = nb -1;
		ft_printnbr(temp, nb);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/
