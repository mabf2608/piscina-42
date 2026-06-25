/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 09:24:45 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/25 12:24:17 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	char	*temp;
	int	bool;
	
	bool = 1;
	temp = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z' && bool)
		{
			bool = 0;
			*str = *str - 32;
		}
		if (*str >= '0' && *str <= '9')
		{
			bool = 0;
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			if(!bool)
				*str = *str + 32;
			bool = 0;
		}
		else if (*str >= 'a' && *str <= 'z')
		{
			bool = 0;
		}
		else
		{
			bool = 1;
		}
		str++;
	}
	return (temp);
}

int	main (void)
{
	char	str[] = "salut, COMMENT tu Vas ? 42mots QUARANTE-DEUX; cinquante+et+un";
	char	*result = ft_strcapitalize(str);
	write (1, result, 61);
	return (0);
}
