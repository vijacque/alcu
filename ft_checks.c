/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 02:51:49 by quroulon          #+#    #+#             */
/*   Updated: 2015/12/20 15:51:06 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum1.h"

/*
** @descri	vérifie que la chaine envoyée est constituée uniquement de
**			nombre et \n
** @param	string contenant les allumettes
** @return	0 si FAUX, sinon 1
*/

int			check_digit(char *matches)
{
	int		i;

	i = 0;
	while (matches[i])
	{
		if (ft_isdigit(matches[i]) == 0 && matches[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

/*
** @descri	vérifie que la chaine envoyée est constituée d'au moins un
**			chiffre, et d'un \n par ligne valide
** @param	string contenant les allumettes
** @return	0 si FAUX, sinon 1
*/

int			check_ln(char *matches)
{
	int		i;

	i = 0;
	if (ft_atoi(&matches[0]) <= 0 || ft_atoi(&matches[0]) > 10000)
		return (0);
	while (matches[i])
	{
		if ((matches[i] == '\n' && matches[i + 1] == '\n') || matches[0] == '\n')
			return (0);
		else if (matches[i] == '\n' && matches[i + 1] != '\0')
		{
			if (ft_atoi(&matches[i]) <= 0 || ft_atoi(&matches[i]) > 10000)
				return (0);
		}
		i++;
	}
	if (matches[i - 1] != '\n')
		return (0);
	return (1);
}
