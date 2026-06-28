/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 12:11:26 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/28 12:11:27 by mibonill         ###   ########.fr       */
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
