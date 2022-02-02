# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/22 20:23:35 by lugonzal          #+#    #+#              #
#    Updated: 2022/01/23 01:47:45 by lugonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phone_book
CC		=	g++
CFLAGS	=	-Wall -Werror -Wextra -g3
SNTIZE	=	-fsanitize=address
RM		=	rm -rf

FILES	=	phone_book \
			main

SRC = $(addsuffix .cpp, $(FILES))
OBJ = $(addsuffix .o, $(FILES))

.cpp.o:
	$(CC) $(CFLAGS) $(SNTIZE) -o $@ -c $^

all: $(OBJ)
	$(CC) $(CFLAGS) $(SNTIZE) -o $(NAME) $(OBJ)

re:	fclean all

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

.PHONY: all re clean fclean
