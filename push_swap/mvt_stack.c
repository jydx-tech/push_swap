/*header*/

#include "push_swap.h"

void ft_add_back(t_stack *stack, t_node *new_node)
{
if (!stack || !new_node)
		return ;
	if (stack->top == NULL)
	{
		stack->top = new_node;
		stack->end = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		stack->end->next = new_node;
		new_node->prev = stack->end;
		new_node->next = NULL;
		stack->end = new_node;
	}
	stack->size++;
}

void	ft_swap_two_first(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack || stack->size < 2)
		return;
	first = stack->top;
	second = first->next;
	stack->top = second;
	if (second->next)
	{
		second->next->prev = first;
		first->next = second->next;
	}
	else
	{
		first->next = NULL;
		stack->end = first;
	}
	second->next = first;
	first->prev = second;
	second->prev = NULL;
}

void	ft_rotate(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	if (!stack || stack->size < 2)
		return;
	first = stack->top;
	second = first->next;
	last = stack->end;
	stack->top = second;
	second->prev = NULL;
	stack->end = first;
	first->prev = last;
	first->next = NULL;
	last->next = first;
}

void	ft_reverse_rotate(t_stack *stack)
{
	t_node	*first;
	t_node	*second_last;
	t_node	*last;

	if (!stack || stack->size < 2)
		return;
	first = stack->top;
	last = stack->end;
	second_last = last->prev;
	stack->top = last;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
	stack->end = second_last;
	second_last->next = NULL;
}

void	ft_push(t_stack *stack_from, t_stack *stack_to)
{
	t_node	*slip_node;
	t_node	*first_to;

	if (!stack_from || !stack_to || !stack_from->top)
		return;
	slip_node = stack_from->top;
	first_to = stack_to->top;
	stack_to->top = slip_node;
	stack_from->top = slip_node->next;
	if (first_to)
	{
		slip_node->next = first_to;
		first_to->prev = slip_node;
	}
	else
	{
		slip_node->next = NULL;
		stack_to->end = slip_node;
	}
	if (stack_from->top)
		stack_from->top->prev = NULL;
	else
		stack_from->end = NULL;
	stack_from->size -= 1;
	stack_to->size += 1;
}
