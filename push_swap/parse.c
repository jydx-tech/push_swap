/*header*/

#include "push_swap.h"

void ft_parse_flag(t_config *config, int argc, char **argv)
{
    int i;

    i = 1;
    config->strategy = "adaptive";
    config->bench_mode = 0;
    while (i < argc && argv[i][0] == '-' && argv[i][1] == '-')
    {

        if (ft_strcmp(argv[i], "--bench") == 0)
            config->bench_mode = 1;
        else if (ft_strcmp(argv[i], "--simple") == 0)
            config->strategy = "simple";
        else if (ft_strcmp(argv[i], "--medium") == 0)
            config->strategy = "medium";
        else if (ft_strcmp(argv[i], "--complex") == 0)
            config->strategy = "complex";
        else if (ft_strcmp(argv[i], "--adaptive") == 0)
            config->strategy = "adaptive";
        else 
            exit_error(NULL, NULL);
        i++;
    }
    config->pos_index_pars = i;
}



t_stack ft_parse(t_config *config, int argc, char **argv)
{
    t_stack *stack;

    ft_parse_flag(config, argc, argv);
    ft_parse_numb(stack,argc, argv);
    return (stack);
}