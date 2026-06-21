/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 12:34:10 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/21 13:30:21 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	k;
	char	l;

	i = '0';
	j = '0';
	k = '0';
	l = '0';

	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				l = '0';
				while (l <= '9')
				{
					if (l > j && k >= i && l >= i)
					{
						write (1, &i, 1);
						write (1, &j, 1);
						write (1, " ", 1);
						write (1, &k, 1);
						write (1, &l, 1);
						if (i == '9' && j == '9' && k == '9' && l == '9')
						{
						}
						else
						{
							write (1, ", ", 2);
						}
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

int	main (void)
{
	ft_print_comb2();
	return (0);
}
