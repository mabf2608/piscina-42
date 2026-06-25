/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 08:12:13 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/25 08:19:43 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*temp;
	char	*aux;

	temp = str;
	aux = temp;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*temp = *str + 32;
		str++;
		temp++;
	}
	return (aux);
}
/*
int	main(void)
{
	char	str[] = "HoLA Buenas";
	char	*result = ft_strlowcase(str);
	write (1, result, 12);
	return (0);
}
*/
