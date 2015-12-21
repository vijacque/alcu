/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extracts.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 02:54:47 by quroulon          #+#    #+#             */
/*   Updated: 2015/12/20 17:15:24 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum1.h"

/*
** @descri	extrait de l'entrée standard ou d'un fichier le nombre
**			d'alumettes
** @param	int contenant le file descriptor ou 0 (entrée standard)
** @param	string vide
** @return	string contenant les alumettes
*/

char		*extract_parameters(int input, char *matches, int ln)
{
	char		buf[1];
	t_list		*list;

	list = NULL;
	while ((input != 0 || ln < 2) && read(input, buf, 1) > 0)
	{
		if (buf[0] == '\n' && ln > 0 && input == 0)
			ln++;
		else if (buf[0] == '\n')
		{
			ft_lstpush(&list, buf, 1);
			ln++;
		}
		else
		{
			ft_lstpush(&list, buf, 1);
			ln = 0;
		}
	}
	if (!(matches = (char*)malloc(sizeof(char) * ft_lstsize(list))))
		return (NULL);
	matches = ft_lsttochar(list, matches);
	matches[ft_lstsize(list)] = '\0';
	free(list);
	return (matches);
}
