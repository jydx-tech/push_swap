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
void    ft_init_config(t_config *config, t_bench *stats)
{
    stats->disorder = 0;
    stats->count_ops = 0;
    stats->sa = 0;
    stats->sb = 0;
    stats->ss = 0;
    stats->pa = 0;
    stats->pb = 0;
    stats->ra = 0;
    stats->rb = 0;
    stats->rr = 0;
    stats->rra = 0;
    stats->rrb = 0;
    stats->rrr = 0;
    config->strategy = "Adaptive";
    config->bench_mode = 0;
    config->pos_index_pars = 0;
    config->stats = stats;
}

t_node *ft_new_node(int content)
{
    t_node *node;

    node = malloc(sizeof(t_node));
    if (!node)
        return (NULL);
    node -> nbr = content;
    node -> index = -1;
	node -> next = NULL;
	node -> prev = NULL;
    return (node);
}