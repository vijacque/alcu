/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:45:41 by quroulon          #+#    #+#             */
/*   Updated: 2015/12/01 17:32:12 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	if (s && f)
	{
		i = ft_strlen((char*)s);
		if (!(str = (char*)malloc(sizeof(str) * i + 1)))
			return (NULL);
		while (s[j])
		{
			str[j] = f(s[j]);
			j++;
		}
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
