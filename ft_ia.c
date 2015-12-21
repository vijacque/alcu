/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 09:23:17 by quroulon          #+#    #+#             */
/*   Updated: 2015/12/20 12:42:39 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum1.h"

static int	ia_peer(int nb_line)
{
	if (nb_line % 4 == 1)
		return (1);
	else if (nb_line % 4 == 2)
		return (2);
	else if (nb_line % 4 == 3)
		return (3);
	else if (nb_line % 4 == 0)
		return (1);
	return (1);
}

static int	ia_odd(int nb_line)
{
	if (nb_line % 4 == 1)
		return (1);
	else if (nb_line % 4 == 2)
		return (1);
	else if (nb_line % 4 == 3)
		return (2);
	else if (nb_line % 4 == 0)
		return (3);
	return (1);
}

void		ia_display(int i)
{
	ft_putendl("\n\033[33m- - - - Computer turn - - - -\033[0m");
	ft_putstr("\033[30m\033[47mComputer have remove ");
	ft_putnbr(i);
	if (i > 1)
		ft_putendl(" matches.\033[0m\n");
	else
		ft_putendl(" match.\033[0m\n");
}

int			*ia_resolution(int *tab, int index)
{
	int		i;

	i = 0;
	if (tab[0] % 2 == 1)
		i = ia_odd(tab[index]);
	else if (index % 2 == 1)
		i = ia_peer(tab[index]);
	else
		i = ia_odd(tab[index]);
	ia_display(i);
	tab[index] -= i;
	return (tab);
}
