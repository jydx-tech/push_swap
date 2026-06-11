/*header*/

#include "push_swap.h"

void    ra(t_stack *stack, t_config *config)
{
    ft_rotate(stack);
    config->stats->count_ops += 1;
    config->stats->ra += 1;
    write(1, "ra\n", 3);
}

void    rb(t_stack *stack, t_config *config)
{
    ft_rotate(stack);
    config->stats->count_ops += 1;
    config->stats->rb += 1;
    write(1, "rb\n", 3);
}

void    rr(t_stack *stack_a, t_stack *stack_b, t_config *config)
{
    ft_rotate(stack_a);
    ft_rotate(stack_b);
    config->stats->count_ops += 1;
    config->stats->rr += 1;
    write(1, "rr\n", 3);
}