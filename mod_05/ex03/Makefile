NAME	= FormExtra

RM		= rm -rf
C++		= clang++
CFLAGS	= -Wall -Werror -Wextra -g3
SNTZ	= -fsanitize=address
INC		= -I .

FILES	= main \
		  Form \
		  Bureaucrat \
		  Intern \
		  ShrubberyCreationForm \
		  PresidentialPardonForm \
		  RobotomyRequestForm 
		  

SRC		= $(addsuffix .cpp, $(FILES))
OBJ		= $(addsuffix .o, $(FILES))

.cpp.o:
	$(C++) $(CFLAGS) $(SNTZ) $(INC) -o $@ -c $^

$(NAME): $(OBJ)
	$(C++) $(CFLAGS) $(SNTZ) -o $(NAME) $(OBJ)

all: $(NAME)

debug: all
	lldb ./$(NAME)

run: all
	./$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean debug fclean re run
