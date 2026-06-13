/*header*/

#include "push_swap.h"

void    ft_index_stack(t_stack *stack_a)
{
    t_node  *current;
    t_node  *compare;

    current = stack_a->top;
    while (current)
    {
        current->index = 0;
        compare = stack_a->top;
        while (compare)
        {
            if (current->nbr > compare->nbr)
                current->index += 1;
            compare = compare->next;
        }
        current = current->next;
    }
}

int ft_size_chunk(t_stack *stack)
{
    if (stack->size <= 100)
        return (15);
    return (30);
}
