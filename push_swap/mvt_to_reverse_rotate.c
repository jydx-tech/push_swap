/*header*/

#include "push_swap.h"

void    rra(t_stack *stack, t_config *config)
{
    ft_reverse_rotate(stack);
    config->stats->count_ops += 1;
    config->stats->rra += 1;
    write(1, "rra\n", 4);
}

void    rrb(t_stack *stack, t_config *config)
{
    ft_reverse_rotate(stack);
    config->stats->count_ops += 1;
    config->stats->rrb += 1;
    write(1, "rrb\n", 4);
}

void    rrr(t_stack *stack_a, t_stack *stack_b, t_config *config)
{
    ft_reverse_rotate(stack_a);
    ft_reverse_rotate(stack_b);
    config->stats->count_ops += 1;
    config->stats->rrr += 1;
    write(1, "rrr\n", 4);
}