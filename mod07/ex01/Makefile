NAME = iter
INC = ./inc
SRC = $(shell find src/*.cpp)
OBJ = $(SRC:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Wall -fsanitize=address -std=c++98 -g
RM = rm -rf

%.o: %.cpp
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: $(NAME)
	@./$(NAME)

.PHONY: all, clean, fclean, re
