/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 12:11:19 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/28 12:11:21 by mibonill         ###   ########.fr       */
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
