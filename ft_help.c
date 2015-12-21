/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 05:51:21 by quroulon          #+#    #+#             */
/*   Updated: 2015/12/20 17:10:23 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum1.h"

int			count_matches(int *tab)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (tab[i])
	{
		nb += tab[i];
		i++;
	}
	return (nb);
}

int			count_lines(char *matches)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (matches[i++])
		if (matches[i] == '\n')
			j++;
	return (j);
}

int			*strtoint(char *matches, int *tab)
{
	int		i;
	int		j;

	i = 0;
	j = count_lines(matches);
	if ((tab = (int*)malloc(sizeof(int) * j)) == 0)
		return (0);
	j = 0;
	tab[j] = ft_atoi(&matches[i]);
	while (matches[i])
	{
		if (matches[i] == '\n' && matches[i + 1] != '\0')
		{
			j++;
			tab[j] = ft_atoi(&matches[i]);
		}
		i++;
	}
	tab[++j] = 0;
	return (tab);
}

void		print_tab(int *tab)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i] > 0)
	{
		j = 0;
		while (j < tab[i])
		{
			ft_putchar('|');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
