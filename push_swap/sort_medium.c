/*header*/

#include "push_swap.h"

int ft_find_pos_chunk(t_stack *stack, int min, int max)
{
    t_node  *current;
    int     pos;

    pos = 0;
    current = stack->top;
    while (pos < stack->size)
    {
        if (current->index >= min && current->index <= max)
            return (pos);
        pos++;
        current = current->next;
    }
    return (-1);
}

void    ft_put_on_top_b(t_stack *stack, int pos, t_config *config)
{
    if (pos <= stack->size / 2)
    {
        while (pos > 0)
        {
            rb(stack, config);
            pos--;
        }
    }
    else
    {
        pos = stack->size - pos;
        while (pos > 0)
        {
            rrb(stack, config);
            pos--;
        }
    }
}

void    ft_push_by_chunk(t_stack *stack_a, t_stack *stack_b, t_config *config)
{
    int size_chunk;
    int size;
    int chunk;
    int pos;

    size = stack_a->size;
    size_chunk = ft_size_chunk(stack_a);
    chunk = 0;
    while (chunk < size)
    {
        pos = ft_find_pos_chunk(stack_a, chunk, chunk + size_chunk - 1);
        if (pos != -1)
        {
            ft_put_on_top_a(stack_a, pos, config);
            pb(stack_a, stack_b, config);
            if (stack_b->top->index < chunk + size_chunk - size_chunk / 2)
                rb(stack_b, config);
        }
        else
            chunk += size_chunk;
    }
}

void    ft_sort_b_and_pa(t_stack *stack_a, t_stack *stack_b, t_config *config)
{
    int i;
    int pos;

    i = stack_b->size - 1;
    while (i >= 0)
    {
        pos = ft_find_pos(stack_b, i);
        if (pos != -1)
        {
            ft_put_on_top_b(stack_b, pos, config);
            pa(stack_a, stack_b, config);
        }
        i--;
    }
}

void    ft_sort_medium(t_stack *stack_a, t_stack *stack_b, t_config *config)
{
    ft_push_by_chunk(stack_a, stack_b, config);
    ft_sort_b_and_pa(stack_a, stack_b, config);
}