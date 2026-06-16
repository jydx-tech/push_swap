/*header*/

#include "checker.h"


void ft_read_and_apply(t_stack *stack_a, t_stack *stack_b)
{
    char *line;

    while ((line = get_next_line(0)) != NULL)
    {
       if (!ft_do_operation(stack_a, stack_b, line))
       {
            free(line);
            error_exit(stack_a, stack_b);
       }
       free(line);
    }
}

int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;
    t_config    config;
    t_bench stats;

    if (argc < 2)
        return(0);
    ft_init_config(&config, &stats);
    stack_a = init_stack();
    if (!stack_a)
        error_exit(NULL, NULL);
    stack_b = init_stack();
    if (!stack_b)
        error_exit(stack_a, NULL);
    ft_parse(stack_a, &config, argc, argv);
    ft_disorder(stack_a, &config);
    if (stack_a->size <= 1 || config.stats->disorder == 0)
    {
        free_stack(stack_a);
        return (0);
    } 
    ft_read_and_apply(stack_a, stack_b);
    ft_is_sorted(stack_a, stack_b);
    free_stack(stack_a);
    free_stack(stack_b);
    return (0);
}