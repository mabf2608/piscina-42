/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 12:08:55 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/28 12:08:58 by mibonill         ###   ########.fr       */
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
