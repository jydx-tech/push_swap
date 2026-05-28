/*heade*/

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_config    *config;

    stack_a = ft_parse(stack_a, config, argc, argv);
    if (!stack_a)
        return (0);
    ft_disorder(stack_a, config);
    if (config->bench_mode == 1)
        ft_printbench(config);
    free (stack_a);
    return (0);
}