CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++17
VAL = valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes
SRC = main.cpp Fixed.cpp Point.cpp Bsp.cpp
OBJ = $(SRC:%.cpp=%.o)

NAME = file

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)
	@echo "\033[32mProgram is ready to execute\033[0m"

clean:
	@rm -f $(OBJ)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all

valgrind: $(NAME)
	$(VAL) ./$(NAME)

.PHONY: all clean fclean re valgrind