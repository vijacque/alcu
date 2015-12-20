/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 20:49:22 by quroulon          #+#    #+#             */
/*   Updated: 2015/12/20 15:46:12 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum1.h"

void		resolve(char *matches, int *tab, int first)
{
	int		nb_m;
	int		index;
	int		test;

	print_tab(tab);
	index = count_lines(matches) - 1;
	while ((nb_m = count_matches(tab)) > 0 && index >= 0)
	{
		if (first == 1 && first++)
		{
			test = 0;
			human_display(1, tab[index]);
			while (test != 1 && test != 2 && test != 3)
				test = human_resolution(tab, index);
			tab[index] -= test;
		}
		else if (first == 2 && first--)
		{
			tab = ia_resolution(tab, index);
		}
		if (tab[index] == 0)
			index--;
		print_tab(tab);
	}
	print_result(first);
}

int			main_resolve(char *matches)
{
	int		*tab;
	int		first;

	tab = NULL;
	if (!check_digit(matches) || !check_ln(matches))
	{
		ft_putstr_fd("\033[31mERROR\n\033[0m", 2);
		return (0);
	}
	tab = strtoint(matches, tab);
	ft_putendl("\033[35m- - - - Welcome to Alum1 - - - -\033[0m"); 
	first = players();
	resolve(matches, tab, first);
	free(tab);
	return (1);
}

int			main(int ac, char **av)
{
	int		input;
	char	*matches;

	input = 0;
	matches = NULL;
	if (ac == 2)
	{
		input = open(av[1], O_RDONLY);
		matches = extract_parameters(input, matches);
		close(input);
		main_resolve(matches);
	}
	else if (ac == 1)
	{
		matches = extract_parameters(input, matches);
		main_resolve(matches);
	}
	else
		ft_putstr_fd("\033[31mERROR\n\033[0m", 2);
	free(matches);
	return (0);
}
