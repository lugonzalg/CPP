NAME	= DiamondTrap

RM		= rm -rf
CFLAGS	= -Wall -Werror -Wextra -g3
SNTZ	= -fsanitize=address
C++		= clang++ -std=c++98 -Wshadow -Wno-shadow
INC		= -I .

FILES	=   ClapTrap \
			FragTrap \
			ScavTrap \
			DiamondTrap \
            main

SRC		= $(addsuffix .cpp, $(FILES))
OBJ		= $(addsuffix .o, $(FILES))

.cpp.o:
	$(C++) $(CFLAGS) $(SNTZ) $(INC) -o $@ -c $^

$(NAME): $(OBJ)
	$(C++) $(CFLAGS) $(SNTZ) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
