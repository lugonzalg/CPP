NAME 	= Zombie

RM 		= rm -rf
CFLAGS	= -g3 -Wall -Werror -Wextra
SNTZ	= -fsanitize=address
C++		= clang++ -std=c++98
INC 	= -I .

FILES	= Zombie \
		  main \
		  ZombieHorde 

SRC	= $(addsuffix .cpp, $(FILES))
OBJ	= $(addsuffix .o, $(FILES))

.cpp.o:
ifneq (,$(findstring sn, $(MAKEFLAGS)))
	$(C++) $(CFLAGS) $(INC) $(SNTZ) -o $@ -c $^
else
	+$(C++) $(CFLAGS) $(INC) -o $@ -c $^
endif

$(NAME): $(OBJ)
ifneq (,$(findstring sn, $(MAKEFLAGS)))
	$(C++) $(CFLAGS) $(SNTZ) -o $(NAME) $(OBJ)
else
	+$(C++) $(CFLAGS) -o $(NAME) $(OBJ)
endif

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) Zombie.dSYM

re: fclean all

.PHONY: all clean sn fclean re 
