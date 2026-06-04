/*header*/

#include "push_swap.h"

void ft_parse_flag(t_config *config, int argc, char **argv)
{
    int i;

    i = 1;
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
            error_exit(NULL, NULL);
        i++;
    }
    config->pos_index_pars = i;
}

void    add_stack(char **split_arg, t_stack *stack_a)
{
    t_node	*new;
	int		i;
	int		val;

	i = 0;
	while (split_arg[i])
	{
		val = ft_atoi(split_arg[i]);
		if (ft_str_is_numeric(split_arg[i]) == 0 || ft_is_duplicate(val, stack_a) == 1)
		{
			free_split_tab(split_arg);
			error_exit(stack_a, NULL);
		}
		new = ft_new_node(val);
		if (!new)
		{
			free_split_tab(split_arg);
			error_exit(stack_a, NULL);
		}
		ft_add_back(stack_a, new);
		i++;
	}
	free_split_tab(split_arg);
}

void    ft_parse_numb(t_stack *stack_a, t_config *config, int argc, char **argv)
{
    int    i;
    char **split_arg;

    i = config->pos_index_pars;
    while (i < argc)
    {
        split_arg = ft_split(argv[i], ' ');
        if (!split_arg)
            error_exit(stack_a, NULL);
        if (split_arg[0] == NULL)
        {
            free(split_arg);
            error_exit(stack_a, NULL);
        }
        add_stack(split_arg, stack_a);
        i++;
    }
}


void ft_parse(t_stack *stack_a, t_config *config, int argc, char **argv)
{
    ft_parse_flag(config, argc, argv);
    ft_parse_numb(stack_a, config, argc, argv);
}