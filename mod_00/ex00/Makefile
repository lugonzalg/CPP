NAME 	= megaphone

RM 	= rm -rf
CFLGAS	= -Wall -Werror -Wextra -g3
SNTZ	= -fsanitize=address
C++	= g++

FILES	= main

SRC	= $(addsuffix .cpp, $(FILES))
OBJ	= $(addsuffix .o, $(FILES))

.cpp.o: $(SRC)
	$(C++) $(CFLGAS) $(SNTZ) -o $@ -c $^

$(NAME): $(OBJ)
	$(CC) $(CFLGAS) $(SNTZ) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
