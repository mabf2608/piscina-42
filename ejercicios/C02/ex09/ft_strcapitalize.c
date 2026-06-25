/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 09:24:45 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/25 13:35:05 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		bool;
	char	*temp;

	bool = 1;
	temp = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		if (*str >= 'a' && *str <= 'z' && bool)
			*str = *str - 32;
		if (*str >= '0' && *str <= '9')
			bool = 0;
		else if (*str >= 'a' && *str <= 'z')
			bool = 0;
		else if (*str >= 'A' && *str <= 'Z')
			bool = 0;
		else
			bool = 1;
		str++;
	}
	return (temp);
}
/*
int	main(void)
{
	char	str[] = "salut, COMMENT tu+Vas ? 42mots";
	char	*result = ft_strcapitalize(str);
	write (1, result, 30);
	return (0);
}
*/
