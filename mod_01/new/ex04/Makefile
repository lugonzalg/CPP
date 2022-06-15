NAME    = Sed

RM      = rm -rf
CFLAGS  = clang++ -std=c++98 -Wall -Werror -Wextra
SNTIZE  = -fsanitize=address -g3
INC     = -I .

FILES   =   main 

SRC     = $(addsuffix .cpp, $(FILES))
OBJ     = $(addsuffix .o, $(FILES))

.cpp.o:
	$(CFLAGS) $(INC) $(SNTIZE) -o $@ -c $^

$(NAME): $(OBJ)
	$(CFLAGS) $(SNTIZE) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) Zombie.dSYM

re: fclean all

.PHONY: all clean sn fclean re sn
