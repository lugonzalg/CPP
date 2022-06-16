NAME 	= Brain

RM 		= rm -rf
CFLGAS	= -g3 -Wall -Werror -Wextra
SNTZ	= -fsanitize=address
C++		= clang++
INC 	= -I .
FILES	= main \

SRC	= $(addsuffix .cpp, $(FILES))
OBJ	= $(addsuffix .o, $(FILES))

.cpp.o:
ifneq (,$(findstring sn, $(MAKEFLAGS)))
	+$(C++) $(CFLGAS) $(INC) $(SNTZ) -o $@ -c $^
else
	+$(C++) $(CFLGAS) $(INC) -o $@ -c $^
endif

$(NAME): $(OBJ)
ifneq (,$(findstring sn, $(MAKEFLAGS)))
	+$(C++) $(CFLGAS) $(SNTZ) -o $(NAME) $(OBJ)
else
	+$(C++) $(CFLGAS) -o $(NAME) $(OBJ)
endif

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME).dSYM

re: fclean all

.PHONY: all clean sn fclean re
