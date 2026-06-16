/*header*/

#include "checker.h"

void ft_is_sorted(t_stack *stack_a, t_stack *stack_b)
{
    t_node  *current;

    if (stack_b != NULL && stack_b->size > 0)
    {
        write(1, "KO\n", 3);
        return ;
    }
    current = stack_a->top;
    while (current && current->next)
    {
        if (current->nbr > current->next->nbr)
        {
            write(1, "KO\n", 3);
            return ;
        }
        current = current->next;
    }
    write(1, "OK\n", 3);
}
