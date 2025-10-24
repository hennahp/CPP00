NAME = account
CC = c++;
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "✓ Account compiled successfully!"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling: $<"

clean:
	@rm -f $(OBJS)
	@echo "✗ Object files removed"

fclean: clean
	@rm -f $(NAME)
	@echo "✗ Account removed"

re: fclean all

.PHONY: all clean fclean re