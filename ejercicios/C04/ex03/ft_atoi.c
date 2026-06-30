/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 20:32:36 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/30 12:17:49 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_pos_or_neg(char *str)
{
	int	i;
	int	pair;

	pair = 0;
	i = 0;
	while (str[i] <= '0' || str[i] >= '9')
	{
		if (str[i] == '-')
			pair++;
		i++;
	}
	if (pair % 2 == 0)
		return (1);
	else
		return (0);
}

char	*ft_no_prefix(char *str)
{
	while (*str < '0' || *str > '9')
		str++;
	return (str);
}

int	ft_get_nbr(char *str)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	i = i - 1;
	j = 0;
	aux = 0;
	while (i >= 0)
	{
		aux = (aux * 10) + ((str[j] - '0'));
		i--;
		j++;
	}
	return (aux);
}

int	ft_atoi(char *str)
{
	int	pair;
	int	nbr;

	pair = ft_pos_or_neg(str);
	str = ft_no_prefix(str);
	nbr = ft_get_nbr(str);
	if (pair == 0)
		nbr = nbr * -1;
	return (nbr);
}
/*
int	main(void)
{
	int aux;
	aux = ft_atoi(" ---+---asf634ab567");
	printf("%d", aux);
	return (0);
}
*/
