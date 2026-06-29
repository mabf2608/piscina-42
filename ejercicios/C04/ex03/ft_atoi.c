/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibonill <mibonill@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 20:32:36 by mibonill          #+#    #+#             */
/*   Updated: 2026/06/29 21:42:22 by mibonill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_pos_or_neg(char *str)
{
	int	i;
	int	pair;
	
	pair = 0; 
	i = 0;
	while (str[i] < '0' && str[i] > '9')
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
	while (*str < '0' && *str > '9')
		str++;
	return (str);
}

int		ft_get_nbr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	i = i - 1;

	int	temp[i];
	int aux;
	
	aux = 0;
	while( i >= 0)
	{
		aux = aux(*10) +((str[i] - '0'));
	   	i--;
	}
	return (aux);
}

int		ft_atoi(char *str);
{
	//Primero filtrar los espacios iniciales y quitarlos de la string
	//Filtrar los signos '-' si cantidad % 2 = 0 par si no 1 y quitarlos del array 
	//(luego se multiplica según el v		alor * -1
	//Procesar cualquier cantidad de digitos en base 10 y lo devuelve hasta donde deja de ser numero
	//No controlar overflow ni underflow (se puede hacer con long) ya que queda indefinido
	int	pair;
	int	nbr;

	pair = ft_pos_or_neg(str);
	str = ft_no_prefix(str);
	nbr = ft_get_nbr(str);

	if (pair == 0)
		nbr = nbr * -1;
	return (nbr);
}
