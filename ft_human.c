/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_human.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 08:38:59 by quroulon          #+#    #+#             */
/*   Updated: 2015/12/21 13:59:42 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum1.h"

void		human_display(int boolean, int max)
{
	if (boolean == 1)
	{
		ft_putendl("\n\033[36m- - - - - Human turn - - - - -\033[0m");
		ft_putendl("\033[30m\033[47mYou, kill theses matches !!!?\033[0m");
		ft_putstr("\033[30m\033[47mThere is \033[31m");
		ft_putnbr(max);
		if (max > 1)
			ft_putendl("\033[30m\033[47m matches on the line.\033[0m\n");
		else if (max == 1)
			ft_putendl("\033[30m\033[47m match on the line.\033[0m\n");
	}
	else if (boolean == 0)
	{
		ft_putstr("\033[30m\033[47mType 1, 2, or 3. (\033[31m");
		ft_putnbr(max);
		if (max > 1)
			ft_putendl("\033[30m matches on the line)\033[0m\n");
		else if (max == 1)
			ft_putendl("\033[30m match on the line)\033[0m\n");
	}
}

int			human_resolution(int *tab, int index)
{
	int		i;
	int		nb;
	char	buf;

	i = 0;
	nb = 0;
	while (read(1, &buf, 1))
	{
		i++;
		if (buf == '1')
			nb = (tab[index] >= 1) ? 1 : -1;
		else if (buf == '2')
			nb = (tab[index] >= 2) ? 2 : -1;
		else if (buf == '3')
			nb = (tab[index] >= 3) ? 3 : -1;
		else if (buf == '\n')
		{
			if (i > 2 || nb == -1)
				nb = 0;
			if (nb == 0)
				human_display(0, tab[index]);
			return (nb);
		}
	}
	return (0);
}
