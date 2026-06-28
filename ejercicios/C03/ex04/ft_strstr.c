/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 08:30:35 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/28 09:21:42 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && to_find[j] == str[i + j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int	main(void){
	char    str[] = "Hola Buenas Tardes";
    char    to_find[] = "Buenas";
    char    *res;

    res = ft_strstr(str, to_find);
    if (res != 0)
        printf("%s\n", res);
    else
        printf("No se encontró la subcadena.\n");

    return (0);
}
*/
