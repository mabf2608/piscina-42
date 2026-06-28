/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 09:26:30 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/28 11:03:20 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l_dest;
	unsigned int	l_src;
	unsigned int	i;
	unsigned int	total_l;

	i = 0;
	l_dest = ft_length(dest);
	l_src = ft_length(src);
	total_l = l_dest + l_src;
	if (l_dest >= size)
		return (l_src + size);
	while (src[i] != '\0' && l_dest < size -1)
	{
		dest[l_dest] = src[i];
		l_dest ++;
		i++;
	}
	dest[l_dest] = '\0';
	return (total_l);
}
/*
int	main(void)
{
	char dest1[20] = "Hola ";
    char src1[] = "Mundo";
    unsigned int size1 = 20;
    unsigned int res1;

    printf("dest = \"%s\"\n", dest1);
    res1 = ft_strlcat(dest1, src1, size1);
    printf("dest = \"%s\"\n", dest1);
    printf("%u\n\n", res1);
	return (0);
}
*/
