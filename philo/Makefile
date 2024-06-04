NAME = philo
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC = main.c utils.c init.c threads.c monitor.c routine_actions.c parsing.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking objects into $@"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c philo.h
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning object files"
	@$(RM) $(OBJ) 

fclean: clean
	@echo "Cleaning executables"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re