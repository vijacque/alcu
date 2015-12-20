# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/19 21:56:33 by quroulon          #+#    #+#              #
#    Updated: 2015/12/20 16:51:36 by quroulon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= alum1
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra

SRC			= main.c ft_checks.c ft_extracts.c ft_help.c ft_display.c \
			ft_human.c ft_ia.c

OBJ			= $(SRC:.c=.o)

HEADER1		= ./libft/includes/
HEADER2		= ./

LIB			= libft/libft.a

all: $(NAME)

.SILENT : $(NAME)
$(NAME):
	$(CC) $(CFLAGS) -I $(HEADER1) -I $(HEADER2) -c $(SRC)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

.SILENT : clean
clean:
	rm -f $(OBJ)

.SILENT : fclean
fclean: clean
	rm -f $(NAME)

re: fclean all

