NAME = RPN 

CC = c++
CFLAG = -Wall -Werror -Wextra -g -fsanitize=address -std=c++98

SRC = $(shell find src/*.cpp)
OBJ = $(SRC:.cpp=.o)
INC = ./inc 

%.o:%.cpp
	$(CC) $(CFLAG) -I$(INC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $^ -o $@

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf

re: fclean all

test: all 
	./$(NAME) "8 9 * 19 - 9 - 9 - 4 - 1 +"
	./$(NAME) "7 7 * 7 -"
	./$(NAME) "1 2 * 2 / 2 * 2 4 - +"
	./$(NAME) "(1 + 1)" 

.PHONY: all, clean, fclean, re

