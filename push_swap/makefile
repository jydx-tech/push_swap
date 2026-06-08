# Nom du programme
NAME        = push_swap

# Commandes
CC          = gcc
CFLAGS      = -Wall -Wextra -Werror
RM          = rm -f

# Fichiers sources
SRCS        = push_swap.c \
              init.c \
              parse.c \
              utils.c \
              split.c \
              mvt_stack.c \
              error.c

# Objets
OBJS        = $(SRCS:.c=.o)

# Règle principale
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Nettoyage
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re