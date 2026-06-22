/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 12:34:10 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/22 18:47:59 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_conditions(char arr[])
{
	if (arr[3] > arr[0] || (arr[3] == arr[0] && arr[4] > arr[1]))
	{
		write (1, arr, 5);
		if (arr[0] != '9' || arr[1] != '8' || arr[3] != '9' || arr[4] != '9')
			write (1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	arr[5];

	arr[0] = '0';
	arr[2] = ' ';
	while (arr[0] <= '9')
	{
		arr[1] = '0';
		while (arr[1] <= '9')
		{
			arr[3] = '0';
			while (arr[3] <= '9')
			{
				arr[4] = '0';
				while (arr[4] <= '9')
				{
					ft_print_conditions(arr);
					arr[4]++;
				}
				arr[3]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
}
