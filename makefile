NAME		= push_swap
CHECKER		= checker

CC			= cc
CFLAGS		= -Wall -Wextra -Werror

# ─── Sources push_swap ───────────────────────────────────────────────────────
PUSH_SWAP_DIR	= push_swap
PUSH_SWAP_SRCS	= $(PUSH_SWAP_DIR)/disorder.c \
				  $(PUSH_SWAP_DIR)/error.c \
				  $(PUSH_SWAP_DIR)/init.c \
				  $(PUSH_SWAP_DIR)/mvt_stack.c \
				  $(PUSH_SWAP_DIR)/mvt_to_push.c \
				  $(PUSH_SWAP_DIR)/mvt_to_reverse_rotate.c \
				  $(PUSH_SWAP_DIR)/mvt_to_rotate.c \
				  $(PUSH_SWAP_DIR)/mvt_to_swap.c \
				  $(PUSH_SWAP_DIR)/parse.c \
				  $(PUSH_SWAP_DIR)/print_bench.c \
				  $(PUSH_SWAP_DIR)/printf_fd.c \
				  $(PUSH_SWAP_DIR)/push_swap.c \
				  $(PUSH_SWAP_DIR)/sort_complex.c \
				  $(PUSH_SWAP_DIR)/sort_medium.c \
				  $(PUSH_SWAP_DIR)/sort_simple.c \
				  $(PUSH_SWAP_DIR)/split.c \
				  $(PUSH_SWAP_DIR)/utils_two.c \
				  $(PUSH_SWAP_DIR)/utils.c

# ─── Sources checker ─────────────────────────────────────────────────────────
CHECKER_DIR		= checker
CHECKER_SRCS	= $(CHECKER_DIR)/checker.c \
				  $(CHECKER_DIR)/get_next_line_utils.c \
				  $(CHECKER_DIR)/get_next_line.c \
				  $(CHECKER_DIR)/operation.c \
				  $(CHECKER_DIR)/is_sorted.c

# ─── Sources communes (partagées entre push_swap et checker) ─────────────────
# Les fichiers de logique de mouvements et d'init sont réutilisés par le checker
SHARED_SRCS		= $(PUSH_SWAP_DIR)/disorder.c \
				  $(PUSH_SWAP_DIR)/error.c \
				  $(PUSH_SWAP_DIR)/init.c \
				  $(PUSH_SWAP_DIR)/mvt_stack.c \
				  $(PUSH_SWAP_DIR)/mvt_to_push.c \
				  $(PUSH_SWAP_DIR)/mvt_to_reverse_rotate.c \
				  $(PUSH_SWAP_DIR)/mvt_to_rotate.c \
				  $(PUSH_SWAP_DIR)/mvt_to_swap.c \
				  $(PUSH_SWAP_DIR)/parse.c \
				  $(PUSH_SWAP_DIR)/printf_fd.c \
				  $(PUSH_SWAP_DIR)/split.c \
				  $(PUSH_SWAP_DIR)/utils_two.c \
				  $(PUSH_SWAP_DIR)/utils.c

# ─── Objets ──────────────────────────────────────────────────────────────────
PUSH_SWAP_OBJS	= $(PUSH_SWAP_SRCS:.c=.o)
CHECKER_OBJS	= $(CHECKER_SRCS:.c=.o) $(SHARED_SRCS:.c=.o)

# ─── Dossier de sortie ───────────────────────────────────────────────────────
BIN_DIR		= bin
BIN_PS		= $(BIN_DIR)/$(NAME)
BIN_CK		= $(BIN_DIR)/$(CHECKER)

# ─── Règles ──────────────────────────────────────────────────────────────────
all: $(BIN_DIR) $(BIN_PS)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_PS): $(PUSH_SWAP_OBJS)
	$(CC) $(CFLAGS) -o $(BIN_PS) $(PUSH_SWAP_OBJS)
	@echo "✅  $(BIN_PS) compiled"

bonus: $(BIN_DIR) $(BIN_CK)

$(BIN_CK): $(CHECKER_OBJS)
	$(CC) $(CFLAGS) -o $(BIN_CK) $(CHECKER_OBJS)
	@echo "✅  $(BIN_CK) compiled"

%.o: %.c
	$(CC) $(CFLAGS) -I$(PUSH_SWAP_DIR) -I$(CHECKER_DIR) -c $< -o $@

clean:
	rm -f $(PUSH_SWAP_OBJS) $(CHECKER_OBJS)
	@echo "🧹  objects removed"

fclean: clean
	rm -rf $(BIN_DIR)
	@echo "🗑️   binaries removed"

re: fclean all

.PHONY: all bonus clean fclean re
