/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 07:03:28 by quroulon          #+#    #+#             */
/*   Updated: 2015/12/21 14:26:42 by vijacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum1.h"

void		print_result(int first)
{
	if (first == 2)
		ft_putendl("\033[37;1m\033[41m- - - - - - You Lose - - - - - -\033[0m");
	else if (first == 1)
		ft_putendl("\033[30m\033[42m- - - - - - You Win - - - - - -\033[0m");
}

int			players(void)
{
	int		i;
	char	buf;

	i = 0;
	buf = 'a';
	ft_putendl("\033[30m\033[47mWho will start ? Human : 1 || IA : 2\033[0m");
	while (i == 0)
	{
		read(1, &buf, 1);
		if (buf == '1')
			return (1);
		else if (buf == '2')
			return (2);
		else if (buf != '\n')
		{
			ft_putstr("\033[30m\033[47mType 1 to play in first, or type");
			ft_putendl(" 2\033[0m");
		}
	}
	return (2);
}
