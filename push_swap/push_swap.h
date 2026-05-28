/*header*/

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct s_stack
{
	t_node	*top;
	t_node	*end;
	int	size;
}					t_stack;

typedef struct s_node
{
	int			nbr;
    int         index;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct s_config
{
	char	*strategy;
	int	bench_mode;
	int	pos_index_pars;
	t_bench	*stats;
}				t_config;

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

/*parseur*/
t_stack ft_parse(t_config *config, int argc, char **argv);
void ft_parse_flag(t_config *config, int argc, char **argv);

/*utils*/
int	ft_strcmp(char *s1, char *s2);

/*error*/
void    error_exit(t_stack *a, t_stack *b);

#endif