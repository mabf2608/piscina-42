/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 14:16:16 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/25 19:11:08 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*src)
	{
		if (size != 0 && i + 1 < size)
		{
			*dest = *src;
			write (1, dest, 1);
			dest++;
		}
		src++;
		i++;
	}
	if (size != 0)
		*dest = '\0';
	return (i);
}
/*
int		main(void)
{
	int		x = 1;
	char	*str = "Hola Ciao";
	char	dest[x];
	char  aux = ft_strlcpy(dest, str, x) + '0';
	write (1, &aux, 1);

	return (0);
}
*/
