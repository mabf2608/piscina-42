/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 12:11:54 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/28 12:11:58 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	char	arr[3];

	hex = "0123456789abcdef";
	arr[0] = '\\';
	while (*str)
	{
		if (*str < 32 || *str == 127)
		{
			arr[1] = hex[(unsigned char)*str / 16];
			arr[2] = hex[(unsigned char)*str % 16];
			write (1, arr, 3);
		}
		else
			write (1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	arr[] = "Coucou\ntu vas bien?";
	ft_putstr_non_printable(arr);
	return (0);
}
*/
