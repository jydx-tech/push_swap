#include "push_swap.h"

void    pa(t_stack *stack_a, t_stack *stack_b, t_config *config)
{
    ft_push(stack_b, stack_a);
    config->stats->count_ops += 1;
    config->stats->pa += 1;
    write(1, "pa\n", 3);
}

void    pb(t_stack *stack_a, t_stack *stack_b, t_config *config)
{
    ft_push(stack_a, stack_b);
    config->stats->count_ops += 1;
    config->stats->pb += 1;
    write(1, "pb\n", 3);
}