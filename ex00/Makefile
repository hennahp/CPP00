NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

# Colors
GREEN = \033[0;32m
BLUE = \033[0;34m
RED = \033[0;31m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
@echo "$(GREEN)✓ Megaphone compiled successfully!$(RESET)"

%.o: %.cpp
@$(CC) $(CFLAGS) -c $< -o $@
@echo "$(BLUE)Compiling: $<$(RESET)"

clean:
@rm -f $(OBJS)
@echo "$(RED)✗ Object files removed$(RESET)"

fclean: clean
@rm -f $(NAME)
	@echo "$(RED)✗ Megaphone removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re