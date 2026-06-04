/*header*/

#include "push_swap.h"

t_stack *init_stack(void)
{
    t_stack *stack;

    stack = malloc(sizeof(t_stack));
    if (!stack)
        return (NULL);
    stack->top = NULL;
    stack->end = NULL;
    stack->size = 0;
    return (stack);
}
t_bench *init_bench(void)
{
    t_bench *bench;

    bench = malloc(sizeof(t_bench));
    if (!bench)
        return (NULL);
    bench->disorder = 0;
    bench->count_ops = 0;
    bench->sa = 0;
    bench->sb = 0;
    bench->ss = 0;
    bench->pa = 0;
    bench->pb = 0;
    bench->ra = 0;
    bench->rb = 0;
    bench->rr = 0;
    bench->rra = 0;
    bench->rrb = 0;
    bench->rrr = 0;
    return (bench);
}

t_config    *init_config(void)
{
    t_config    *config;

    config = malloc(sizeof(t_config));
    if (!config)
        return (NULL);
    config->strategy = "adaptive";
	config->bench_mode = 0;
	config->pos_index_pars = 0;
	config->stats = init_bench();
    if (!config->stats)
    {
        free(config);
        return (NULL);
    }
    return (config);
}

void    ft_init(t_stack **stack_a, t_config **config)
{
    *stack_a = init_stack();
    if (!*stack_a)
        error_exit(NULL, NULL);
    *config = init_config();
    if (!*config)
        error_exit(NULL,NULL);
}

t_node *ft_new_node(int content)
{
    t_node *node;

    node = malloc(sizeof(t_node));
    if (!node)
        return (NULL);
    node -> nbr = content;
    node -> index = 0;
	node -> next = NULL;
	node -> prev = NULL;
    return (node);
}