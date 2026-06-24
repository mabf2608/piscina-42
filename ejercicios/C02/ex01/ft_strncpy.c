/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 19:30:49 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/24 19:56:48 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*temp;

	temp = dest;
	while (n > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n --;
	}
	if (!*src)
	{
		while (n > 0)
		{
			*dest = '\0';
			dest++;
			n--;
		}
	}
	return (temp);
}
/*
int	main(void)
{
	char	dest[20];
	char	*src = "Hola Vegetta777";
	unsigned	int	n = 20;
	char	*result = ft_strncpy(dest, src, n);

	write (1, result, n);
	return (0);
}
*/
