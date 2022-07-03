NAME 	= Zombie

RM 		= rm -rf
CFLAGS	= -g3 -Wall -Werror -Wextra
SNTZ	= -fsanitize=address
C++		= clang++ -std=c++98
INC 	= -I .
FILES	= Zombie \
		  newZombie \
		  main \
		  randomChump 

SRC	= $(addsuffix .cpp, $(FILES))
OBJ	= $(addsuffix .o, $(FILES))

.cpp.o:
	$(C++) $(CFLAGS) $(INC) $(SNTZ) -o $@ -c $^

$(NAME): $(OBJ)
	$(C++) $(CFLAGS) $(SNTZ) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME).dSYM

re: fclean all

.PHONY: all clean sn fclean re sn
