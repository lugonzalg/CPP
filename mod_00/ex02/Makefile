NAME 	= Account

RM 		= rm -rf
CFLGAS	= -g3 #-Wall -Werror -Wextra
SNTZ	= -fsanitize=address
C++		= g++
INC 	= -I .
FILES	= test \
		  Account

SRC	= $(addsuffix .cpp, $(FILES))
OBJ	= $(addsuffix .o, $(FILES))

.cpp.o: $(SRC)
	$(C++) $(CFLGAS) $(SNTZ) $(INC) -o $@ -c $^

$(NAME): $(OBJ)
	$(C++) $(CFLGAS) $(SNTZ) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
