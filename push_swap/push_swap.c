/*heade*/

#include "push_swap.h"

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
    t_node  *current;
    printf("size: %d\n", stack_a->size);
    printf("strategy: %s\n", config.strategy);
    printf("bench: %d\n", config.bench_mode);
    printf("pos_index_pars: %d\n", config.pos_index_pars);
    current = stack_a->top;
    while (current)
    {
        printf("nbr: %d\n", current->nbr);
        current = current->next;
    }
   /*
    ft_disorder(stack_a, &config);
    if (config->bench_mode == 1)
        ft_printbench(config);
    */
    free_stack(stack_a);
    return (0);
}