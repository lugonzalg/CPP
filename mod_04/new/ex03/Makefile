NAME	= Jungle

C++		= clang++ -std=c++98
RM		= rm -rf
#SNTZ	= -fsanitize=address -g3
CFLAGS	= -Wall -Werror -Wextra -g3
INC		= -I .

FILES	= Ice \
		  Cure \
		  AMateria \
		  Character \
		  MateriaSource \
		  main

SRC		= $(addsuffix .cpp, $(FILES))
OBJ		= $(addsuffix .o, $(FILES))

all: $(NAME)

.cpp.o:
	$(C++) $(CFLAGS) $(SNTZ) $(INC) -o $@ -c $^

$(NAME): $(OBJ)
	$(C++) $(CFLAGS) $(SNTZ) $(INC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
