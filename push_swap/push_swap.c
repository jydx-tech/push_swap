/*heade*/

#include "push_swap.h"

void    ft_sort(t_stack *stack_a, t_config *config)
{
    t_stack *stack_b;

    stack_b = init_stack();
    if (!stack_b)
        error_exit(stack_a, NULL);
    if (ft_strcmp(config->strategy, "simple") == 0)
        ft_sort_simple(stack_a, stack_b, config);
    else if (ft_strcmp(config->strategy, "medium") == 0)
        ft_sort_medium(stack_a, stack_b, config);
}

int main(int argc, char **argv)
{

    t_stack *stack_a;
    t_config    config;
    t_bench stats;

    if (argc < 2)
        return(0);
    ft_init_config(&config, &stats);
    stack_a = init_stack();
    if (!stack_a)
        error_exit(NULL, NULL);
    ft_parse(stack_a, &config, argc, argv);
    /* test */
    t_node  *current;/*
    printf("size: %d\n", stack_a->size);
    printf("strategy: %s\n", config.strategy);
    printf("bench: %d\n", config.bench_mode);
    printf("pos_index_pars: %d\n", config.pos_index_pars);
    current = stack_a->top;
    while (current)
    {
        printf("nbr: %d\n", current->nbr);
        current = current->next;
    }*/
    /*test end*/
    ft_disorder(stack_a, &config);
    if (stack_a->size <= 1 || config.stats->disorder == 0)
    {
        free_stack(stack_a);
        return (0);
    }
   // printf("disorder: %f\n", config.stats->disorder);     /*test*/ 
    ft_index_stack(stack_a);
    /*test
    current = stack_a->top;
    while (current)
    {
        printf("nbr: %d et index: %d\n", current->nbr, current->index);
        current = current->next;
    }*/
    ft_sort(stack_a, &config);
        /*test*/
    current = stack_a->top;
    while (current)
    {
        printf("nbr: %d et index: %d\n", current->nbr, current->index);
        current = current->next;
    }
    /*
    if (config->bench_mode == 1)
        ft_printbench(config);
    */
    free_stack(stack_a);
    return (0);
}