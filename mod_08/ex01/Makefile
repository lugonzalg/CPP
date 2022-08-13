NAME	= Span

C++		= c++ -std=c++98
SNTZ	= -fsanitize=addres
CFLAGS	= -Wall -Werror -Wextra -g3 
RM		= rm -rf

FILES	= main \
		  span

SRC		= $(addsuffix .cpp, $(FILES))
OBJ		= $(addsuffix .o, $(FILES))

.cpp.o:
	$(C++) $(SNTZ) $(CFLAGS) -o $@ -c $^

$(NAME): $(OBJ)
	$(C++) $(SNTZ) $(CFLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
