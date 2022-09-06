NAME	= MutantStack

C++		= c++ -std=c++98
SNTZ	= -fsanitize=address
CFLAGS	= -Wall -Werror -Wextra -g3 
RM		= rm -rf

FILES	= main \
		  mutantstack

SRC		= $(addsuffix .cpp, $(FILES))
OBJ		= $(addsuffix .o, $(FILES))

.cpp.o:
	$(C++) $(SNTZ) $(CFLAGS) -o $@ -c $^

$(NAME): $(OBJ)
	$(C++) $(SNTZ) $(CFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

run: all
	./$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
