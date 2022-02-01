g++ -Wall -Werror -Wextra -fsanitize=address -g3 main.cpp -o test.out
lldb ./test.out
rm test.out
rm -rf test.out*
