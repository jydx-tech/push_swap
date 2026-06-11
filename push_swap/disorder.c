/*header*/

#include "push_swap.h"

void    ft_disorder(t_stack *stack_a, t_config *config)
{
    t_node  *current;
    t_node  *test;
    float   mistake;
    float   total;

    mistake = 0;
    total = 0;
    current = stack_a->top;
    while (current)
    {
        test = current->next;
        while (test)
        {
            if (current->nbr > test->nbr)
                mistake += 1;
            test = test->next;
            total++;
        }
        current = current->next;
    }
    if (total == 0)
        config->stats->disorder = 0;
    else
        config->stats->disorder = mistake / total;
}