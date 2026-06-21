/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabf2608 <mabf2608@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 11:00:24 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/21 11:18:05 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int y, int x);

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x < 1 || y < 1)
	{
		write(1, "Error: usa solo números > 1.\n", 30);
	}
	else
	{
		i = 1;
		while (i <= y)
		{
			j = 1;
			while (j <= x)
			{
				ft_putchar(i, j, y, x);
				j++;
			}
			write (1, "\n", 1);
			i++;
		}
	}
}
