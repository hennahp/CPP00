NAME = account
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)

GREEN = \033[0;32m
RED = \033[0;31m
YELLOW = \033[0;33m
RESET = \033[0m
CYAN = \033[0;36m
BOLD = \033[1m

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)$(BOLD)✓ Account compiled successfully!$(RESET)"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(CYAN)Compiling: $<$(RESET)"

clean:
	@rm -f $(OBJS)
	@echo "$(YELLOW)✗ Object files removed$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)✗ Account removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re