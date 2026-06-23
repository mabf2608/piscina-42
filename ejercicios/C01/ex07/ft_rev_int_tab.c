/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 18:21:48 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/23 18:24:21 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	end;

	temp = 0;
	i = 0;
	end = size -1;
	while (i <= end)
	{
		temp = tab[i];
		tab[i] = tab[end];
		tab[end] = temp;
		end--;
		i++;
	}
}
/*
void	ft_imprimir(int *tab, int size)
{
	int	i;
	char	aux;
	i = 0;
	while (i <=size-1)
	{
		aux = tab[i] + '0';
		write(1, &aux, 1);
		i++;
	}
}
int	main(void)
{
	int tab[] = {4, 3, 2, 1};
	ft_rev_int_tab(tab, 4);
	return (0);
}
*/
