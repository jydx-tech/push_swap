/*heade*/

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_config    *config;

    if (argc < 2)
        return(0);
    ft_init(&stack_a, &config);
    ft_parse(stack_a, config, argc, argv);
    ft_disorder(stack_a, config);
    if (config->bench_mode == 1)
        ft_printbench(config);
    free_stack(stack_a);
    return (0);
}