/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 19:25:32 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/27 19:35:46 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	int		aux;

	aux = ft_strncmp("ABC", "AB", 3);
	printf("%d", aux);
	return (0);
}
*/
