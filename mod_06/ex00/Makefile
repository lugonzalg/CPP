NAME	= Cast01

RM		= rm -rf
C++		= clang++ -std=c++98
SNTZ	= -fsanitize=address
CFLAGS	= -Wall -Werror -Wextra

FILES	= main \
		  Dict

SRC		= $(addsuffix .cpp, $(FILES))
OBJ		= $(addsuffix .o, $(FILES))

.cpp.o:
	$(C++) $(CFLAGS) $(SNTZ) -o $@ -c $^

$(NAME): $(OBJ)
	$(C++) $(CFLAGS) $(SNTZ) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclea re
