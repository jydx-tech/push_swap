/*header*/

#include "checker.h"

static int    ft_do_swap(t_stack *stack_a, t_stack *stack_b, char *line)
{
    if (ft_strcmp("sa\n", line) == 0)
    {
        ft_swap_two_first(stack_a);
        return (1);
    }
    else if (ft_strcmp("sb\n", line) == 0)
    {
        ft_swap_two_first(stack_b);
        return (1);
    }
    else if (ft_strcmp("ss\n", line) == 0)
    {
        ft_swap_two_first(stack_a);
        ft_swap_two_first(stack_b);
        return (1);
    }
    else
        return(0);
}

static int    ft_do_rotate(t_stack *stack_a, t_stack *stack_b, char *line)
{
    if (ft_strcmp("ra\n", line) == 0)
    {
        ft_rotate(stack_a);
        return (1);
    }
    else if (ft_strcmp("rb\n", line) == 0)
    {
        ft_rotate(stack_b);
        return (1);
    }
    else if (ft_strcmp("rr\n", line) == 0)
    {
        ft_rotate(stack_a);
        ft_rotate(stack_b);
        return (1);
    }
    else
        return (0);
}

static int    ft_do_rev_rotate(t_stack *stack_a, t_stack *stack_b, char *line)
{
    if (ft_strcmp("rra\n", line) == 0)
    {
        ft_reverse_rotate(stack_a);
        return (1);
    }
    else if (ft_strcmp("rrb\n", line) == 0)
    {
        ft_reverse_rotate(stack_b);
        return (1);
    }
    else if (ft_strcmp("rrr\n", line) == 0)
    {
        ft_reverse_rotate(stack_a);
        ft_reverse_rotate(stack_b);
        return (1);
    }
    else
        return (0);
}

static int ft_do_push(t_stack *stack_a, t_stack *stack_b, char *line)
{
     if (ft_strcmp("pa\n", line) == 0)
    {
        ft_push(stack_b, stack_a);
        return (1);
    }
    else if (ft_strcmp("pb\n", line) == 0)
    {
        ft_push(stack_a, stack_b);
        return (1);
    }
    else
        return (0);
}

int ft_do_operation(t_stack *stack_a, t_stack *stack_b, char *line)
{
    if (ft_do_swap(stack_a, stack_b, line))
		return (1);
	if (ft_do_rotate(stack_a, stack_b, line))
		return (1);
	if (ft_do_rev_rotate(stack_a, stack_b, line))
		return (1);
	if (ft_do_push(stack_a, stack_b, line))
		return (1);
	return (0);
}