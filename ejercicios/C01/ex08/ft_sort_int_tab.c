/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 18:31:58 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/23 20:41:20 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i <= size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			temp = tab[j + 1];
			if (tab [j] > temp)
			{
				tab[j + 1] = tab[j];
				tab [j] = temp;
			}
			j++;
		}
		i++;
	}
}
