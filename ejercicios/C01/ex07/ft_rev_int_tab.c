/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 15:10:56 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/22 20:35:02 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{	
	char	aux;
	int	n [size];


	while (n >= tab)
	{
		aux = *n + '0'; 
		write (1, &aux, 1);
		n--;
	}
}

int	main(void)
{
	int tab[] = {4321};
	ft_rev_int_tab(tab, 4);
	return (0);
}
