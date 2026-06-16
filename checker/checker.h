/*header*/

#ifndef CHECKER_H
# define CHECKER_H

#include "../push_swap/push_swap.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/*get_nextline*/
char *ft_strjoin(char *s1, char *s2);
int ft_strlen(char *str);
char *ft_strchr(const char *s, int c);
char	*get_next_line(int fd);

/*checker*/
void ft_read_and_apply(t_stack *stack_a,t_stack *stack_b);
int ft_do_operation(t_stack *stack_a, t_stack *stack_b, char *line);
void ft_is_sorted(t_stack *stack_a, t_stack *stack_b);

#endif