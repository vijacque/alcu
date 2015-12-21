# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: quroulon <quroulon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/19 21:56:33 by quroulon          #+#    #+#              #
#    Updated: 2015/12/21 15:10:13 by vijacque         ###   ########.fr        #
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

.PHONY: all clean fclean re

$(NAME):
	@echo "\033[36m- - - - - Welcome to Alcu - - - - -\033[0m"
	@echo "\033[31mTo play you can either load a file into the executable\033[0m"
	@echo "\033[32mOr you can simply execute alum1, write the number of \
matches of your choice, press Enter two times and get a lot of fun ! \033[0m"
	@echo "\033[35mA valid input use the following format\033[0m"
	@echo ""
	@echo ""
	@echo "		5"
	@echo "		3"
	@echo "		7"
	@echo ""
	@echo ""
	@echo ""
	@echo "\033[37mWith this input for examphe you will get this map:\033[0m"
	@echo "| | | | |"
	@echo "| | |"
	@echo "| | | | | | |"
	@echo "\033[34mIt's easy right :), We hope that you wil have a lot of fun \
playing our game\033[0m"
	@make -C libft/
	@$(CC) $(CFLAGS) -I $(HEADER1) -I $(HEADER2) -c $(SRC)
	@$(CC) -o $(NAME) $(OBJ) $(LIB)
	@rm libft/libft.a
.SILENT : clean
clean:
	rm -f $(OBJ)

.SILENT : fclean
fclean: clean
	rm -f $(NAME)

re: fclean all

