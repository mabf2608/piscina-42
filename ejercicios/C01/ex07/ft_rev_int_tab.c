/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 12:07:40 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/28 12:07:42 by mibonill         ###   ########.fr       */
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
