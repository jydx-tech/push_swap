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