/*header*/

#include "push_swap.h"

void    ft_print_bench(t_config *config)
{
    ft_printf_fd(2, "[bench] disorder: %f%%\n", config->stats->disorder * 100);
    ft_printf_fd(2, "[bench] strategy: %s / %s\n", config->strategy, config->type_strategy);
    ft_printf_fd(2, "[bench] total_ops: %d\n", config->stats->count_ops);
    ft_printf_fd(2, "[bench] sa: %d sb: %d ss: %d pa: %d pb: %d\n",
        config->stats->sa, config->stats->sb, config->stats->ss,
        config->stats->pa, config->stats->pb);
    ft_printf_fd(2, "[bench] ra: %d rb: %d rr: %d rra: %d rrb: %d rrr: %d\n",
        config->stats->ra, config->stats->rb, config->stats->rr,
        config->stats->rra, config->stats->rrb, config->stats->rrr);
}