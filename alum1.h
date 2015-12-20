/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alum1.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 11:57:01 by quroulon          #+#    #+#             */
/*   Updated: 2015/12/20 15:05:10 by quroulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALUM1_H
# define ALUM1_H

# include "libft/includes/libft.h"
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int			check_digit(char *matches);
int			check_ln(char *matches);

char		*extract_parameters(int input, char *matches);

int			count_matches(int *tab);
int			count_lines(char *matches);
int			*strtoint(char *matches, int *tab);
void		print_tab(int *tab);

int			players(void);
void		print_result(int first);

int			human_resolution(int *tab, int index);
void		human_display(int boolean, int max);

int			*ia_resolution(int *tab, int index);

#endif
