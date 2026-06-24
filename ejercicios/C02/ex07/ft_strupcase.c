/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 22:09:04 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/24 22:34:02 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*aux;
	char	*temp;

	temp = str;
	aux = temp;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*temp = *str - 32;
		str++;
		temp++;
	}
	return (aux);
}
/*
int	main(void)
{
	char str[] = "hola buenas";
	char	*aux = ft_strupcase(str);
	write (1, aux, 11);
	return (0);
}
*/
