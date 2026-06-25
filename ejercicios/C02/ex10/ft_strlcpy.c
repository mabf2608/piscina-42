/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 14:16:16 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/25 14:34:31 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned	int		i;

	i = 0;
	while (*src)
	{
		if (i <= size - 1)
		{
			*dest = *src;
			write (1, dest, 1);
		}
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (i);
}

int		main(void)
{
	int		x = 5;
	char	*str = "Hola Buenas";
	char	dest[x];
	int aux = ft_strlcpy(dest, str, x);
	printf("%d", aux);

	return (0);
}
