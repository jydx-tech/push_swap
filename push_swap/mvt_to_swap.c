/*header*/

#include "push_swap.h"

void    sa(t_stack *stack, t_config *config)
{
    ft_swap_two_first(stack);
    config->stats->count_ops += 1;
    config->stats->sa += 1;
    write(1, "sa\n", 3);
}

void    sb(t_stack *stack, t_config *config)
{
    ft_swap_two_first(stack);
    config->stats->count_ops += 1;
    config->stats->sb += 1;
    write(1, "sb\n", 3);
}

void    ss(t_stack *stack_a, t_stack *stack_b, t_config *config)
{
    ft_swap_two_first(stack_a);
    ft_swap_two_first(stack_b);
    config->stats->count_ops += 1;
    config->stats->ss += 1;
    write(1, "ss\n", 3);
}