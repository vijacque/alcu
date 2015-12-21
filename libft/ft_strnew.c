/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:34:58 by quroulon          #+#    #+#             */
/*   Updated: 2015/11/30 14:38:30 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	if (!(str = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while (i <= (int)size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
