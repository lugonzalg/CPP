NAME	= Lukas

C++		= clang++
CFLAGS	= -Wall -Werror -Wextra -std=c++98 -g3
SNTZ	= -fsanitize=address
RM		= rm -rf

FILES	= main \
		  Base \
		  A \
		  B \
		  C

SRC		= $(addsuffix .cpp, $(FILES))
OBJ		= $(addsuffix .o, $(FILES))

.cpp.o:
	$(C++) $(CFLAGS) $(SNTZ) -o $@ -c $^

$(NAME): $(OBJ)
	$(C++) $(CFLAGS) $(SNTZ) -o $(NAME) $(OBJ)

all: $(NAME)

run: all
	./$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re run
