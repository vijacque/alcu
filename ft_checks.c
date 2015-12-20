/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 02:51:49 by quroulon          #+#    #+#             */
/*   Updated: 2015/12/20 16:52:42 by quroulon         ###   ########.fr       */
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

int			check_ln(char *match)
{
	int		i;

	i = 0;
	if (ft_atoi(&match[0]) <= 0 || ft_atoi(&match[0]) > 10000)
		return (0);
	while (match[i])
	{
		if ((match[i] == '\n' && match[i + 1] == '\n') || match[0] == '\n')
			return (0);
		else if (match[i] == '\n' && match[i + 1] != '\0')
		{
			if (ft_atoi(&match[i]) <= 0 || ft_atoi(&match[i]) > 10000)
				return (0);
		}
		i++;
	}
	if (match[i - 1] != '\n')
		return (0);
	return (1);
}
