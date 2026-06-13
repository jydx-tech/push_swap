/*header*/

#include "push_swap.h"

void	push_all_to_b(t_stack *stack_a, t_stack *stack_b, int step, t_config *config)
{
	int	next;

	next = 0;
	while (stack_a->size > 0)
	{
		if (stack_a->top->index <= next)
		{
			pb(stack_a, stack_b, config);
			rb(stack_b, config);
			next++;
		}
		else if (stack_a->top->index <= next + step)
		{
			pb(stack_a, stack_b, config);
			next++;
		}
		else
			ra(stack_a, config);
	}
}

void    ft_sort_complex(t_stack *stack_a, t_stack *stack_b, t_config *config)
{
    int chunk;

    chunk = ft_size_chunk(stack_a);
    push_all_to_b(stack_a,stack_b, chunk, config);
    ft_sort_b_and_pa(stack_a, stack_b, config);
}
/*radix*/
/*
// Calcule le nombre maximum de bits nécessaires pour représenter la taille de la pile
// Exemple : Pour 500 nombres, le plus grand index est 499. 
// En binaire, 499 s'écrit sur 9 bits (car 2^9 = 512).
static int  ft_get_max_bits(t_stack *stack)
{
    int max_bits;
    int max_size;

    max_bits = 0;
    max_size = stack->size - 1; // Le plus grand index possible
    while ((max_size >> max_bits) > 0)
        max_bits++;
    return (max_bits);
}

void    ft_sort_complex(t_stack *stack_a, t_stack *stack_b, t_config *config)
{
    int i;
    int j;
    int size;
    int max_bits;

    max_bits = ft_get_max_bits(stack_a);
    i = 0;
    // On boucle sur chaque bit (du bit 0 jusqu'au bit max_bits - 1)
    while (i < max_bits)
    {
        size = stack_a->size;
        j = 0;
        // On parcourt toute la pile A actuelle
        while (j < size)
        {
            // (stack_a->top->index >> i) & 1 permet d'isoler le i-ème bit.
            if (((stack_a->top->index >> i) & 1) == 0)
            {
                // Si le bit est 0, on le stocke temporairement dans B
                pb(stack_a, stack_b, config);
            }
            else
            {
                // Si le bit est 1, on le laisse dans A en le mettant en dessous
                ra(stack_a, config);
            }
            j++;
        }
        // On remet tout le monde dans A pour préserver l'ordre du tri du bit actuel
        while (stack_b->size > 0)
        {
            pa(stack_a, stack_b, config);
        }
        i++; // On passe au bit suivant
    }
}*/
