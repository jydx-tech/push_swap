# Nom de la bibliothèque
NAME        = libftprintf.a

# Commandes
CC          = gcc
CFLAGS      = -Wall -Wextra -Werror
AR          = ar rcs
RM          = rm -f

# Fichiers Sources (Base)
SRCS        = ft_print_char.c \
              ft_print_hex.c \
			  ft_print_nbr.c \
			  ft_print_ptr.c \
			  ft_print_str.c \
			  ft_printf.c \
			  ft_printpourcent.c \
			  ft_selection.c \
			  ft_unsigned_int.c
# Transformation des .c en .o
OBJS        = $(SRCS:.c=.o)

# Règle principale
all: $(NAME)

# Création de l'archive .a
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Nettoyage des fichiers objets (.o)
clean:
	$(RM) $(OBJS)

# Nettoyage complet (objets + .a)
fclean: clean
	$(RM) $(NAME)

# Recompiler tout depuis le début
re: fclean all

# Éviter les conflits avec des fichiers du même nom
.PHONY: all clean fclean re