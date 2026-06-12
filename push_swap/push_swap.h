/*header*/

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_node
{
	int			nbr;
    int         index;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*end;
	int	size;
}					t_stack;

typedef struct s_bench
{
	float	disorder;
	int	count_ops;
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
}		t_bench;

typedef struct s_config
{
	char	*strategy;
	int	bench_mode;
	int	pos_index_pars;
	t_bench	*stats;
}				t_config;

/*parseur*/
void ft_parse(t_stack *stack_a, t_config *config, int argc, char **argv);
void ft_parse_flag(t_config *config, int argc, char **argv);
void    ft_parse_numb(t_stack *stack_a, t_config *config, int argc, char **argv);

/*utils*/
int	ft_strcmp(char *s1, char *s2);
int	ft_str_is_numeric(char *str);
int	ft_atoi(const char *str);
int	ft_is_duplicate(int val, t_stack *stack);
int     ft_is_valid_int(char *str);

/*utils_two*/
void	ft_index_stack(t_stack *stack_a);

/*split*/
char	**ft_split(char const *s, char c);

/*error*/
void    error_exit(t_stack *a, t_stack *b);
void free_stack(t_stack *stack);
void    free_split_tab(char **split_arg);

/*ininitialisation*/
void	ft_init_config(t_config *config, t_bench *stats);
t_stack *init_stack(void);
t_node *ft_new_node(int content);

/*mouvement stack*/
void ft_add_back(t_stack *stack_a, t_node *node);
void	ft_swap_two_first(t_stack *stack);
void	ft_rotate(t_stack *stack);
void	ft_reverse_rotate(t_stack *stack);
void	ft_push(t_stack *stack_from, t_stack *stack_to);

/*mvt_to_swap*/
void    sa(t_stack *stack, t_config *config);
void    sb(t_stack *stack, t_config *config);
void    ss(t_stack *stack_a, t_stack *stack_b, t_config *config);

/*mvt_to_rotate*/
void    ra(t_stack *stack, t_config *config);
void    rb(t_stack *stack, t_config *config);
void    rr(t_stack *stack_a, t_stack *stack_b, t_config *config);

/*mvt_to_reverse_rotate*/
void    rra(t_stack *stack, t_config *config);
void    rrb(t_stack *stack, t_config *config);
void    rrr(t_stack *stack_a, t_stack *stack_b, t_config *config);

/*mvt_to_push*/
void    pa(t_stack *stack_a, t_stack *stack_b, t_config *config);
void    pb(t_stack *stack_a, t_stack *stack_b, t_config *config);

/*disorder*/
void    ft_disorder(t_stack *stack_a, t_config *config);

/*sort_simple*/
void    ft_sort_simple(t_stack *stack_a, t_stack *stack_b, t_config *config);
void    ft_put_on_top(t_stack *stack, int pos, t_config *config);
int ft_find_pos(t_stack *stack, int to_search);

#endif