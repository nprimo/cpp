NAME = PmergeMe 

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
	./$(NAME) 14 2 23 123 943 9 10 2 0

.PHONY: all, clean, fclean, re

