/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 19:17:47 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/25 19:37:08 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str)
{
	char	arr[4];

	arr[0] = '\\';
	arr[1] = '0';
	while (*str)
	{
		if (*str < 32 || *str == 127)
		{
			arr[2] = *str / 16;
			arr[3] = *str % 16;
			write (1, arr, 4);
		}
		else
			write (1, str, 1);
		str++;
	}
}
