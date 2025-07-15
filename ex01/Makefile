CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++17
VAL = valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes
SRC = main.cpp Fixed.cpp

NAME = ex01

all: $(NAME)

$(NAME):
	@$(CC) $(CPPFLAGS) -o $(NAME) $(SRC)
	@echo "\033[32mProgram is ready to execute\033[0m"

clean:
	@rm -f $(NAME)
	
fclean: clean

re: fclean all

valgrind: $(NAME)
	$(VAL) ./$(NAME)

.PHONY: all clean fclean re valgrind