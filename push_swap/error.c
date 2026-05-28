/*header*/

#include "push_swap.h"

void free_stack(t_stack *stack)
{
    t_node  *temp;
    t_node  *current;

    if (!stack)
        return;
    current = stack->top;
    while (current)
    {
        temp = current->next;
        free(current);
        current = temp;
    }
    free(stack);
}

void    error_exit(t_stack *a, t_stack *b)
{
    if (a)
        free_stack(a);
    if (b)
        free_stack(b);
    write(2, "Error\n", 6);
    exit(1);
}