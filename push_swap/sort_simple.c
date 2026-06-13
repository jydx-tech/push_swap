/*header*/

#include "push_swap.h"

int ft_find_pos(t_stack *stack, int to_search)
{
    t_node *current;
    int pos;

    pos = 0;
    current = stack->top;
    while (pos < stack->size)
    {
        if (to_search == current->index)
            return (pos);
        pos++;
        current = current->next;
    }
    return (-1);
}

void    ft_put_on_top_a(t_stack *stack, int pos, t_config *config)
{
    if (pos < stack->size / 2)
    {
        while (pos)
        {
            ra(stack, config);
            pos--;
        }
    }
    else
    {
        pos = stack->size - pos;
        while (pos)
        {
            rra(stack, config);
            pos--;
        }
    }
}

void    ft_sort_simple(t_stack *stack_a, t_stack *stack_b, t_config *config)
{
    int pos;
    int i;

    i = 0;
    while (stack_a->size)
    {
        pos = ft_find_pos(stack_a, i);
        ft_put_on_top_a(stack_a, pos, config);
        pb(stack_a, stack_b, config);
        i++;
    }
    while (stack_b->size)
        pa(stack_a, stack_b, config);
}