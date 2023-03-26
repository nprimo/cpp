NAME = btc 

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
	./$(NAME) input.txt

.PHONY: all, clean, fclean, re
