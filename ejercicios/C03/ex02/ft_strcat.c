/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 19:37:33 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/27 20:01:00 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = src[j];
	return (dest);
}
/*
int	main(void)
{
	char	dest[50] = "Hola Buenas Tardes";
	char	src[] = " Soy Miguel Angel";
	
	printf("%s\n", dest);
	char	*res = ft_strcat(dest, src);
	printf("%s", res);
}
*/
