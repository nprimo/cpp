NAME = buro3

INC = ./inc
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Wall -std=c++98 -fsanitize=address
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
	@./sed

.PHONY: all, clean, fclean, re
