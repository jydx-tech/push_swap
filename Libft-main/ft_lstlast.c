/*header*/

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
    while (lst -> next)
    {
        lst = lst -> next;
    }
    return (lst);
}
/*
int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        t_list *list = NULL;
        int i = 1;
        while (i < argc)
        {
            t_list *node = ft_lstnew(argv[i]);
            if(!node)
                return (1);
            ft_lstadd_front(&list, node);
            i++;
        }
        t_list *last = ft_lstlast(list);
        printf("last node: %s\n", (char *)last -> content);
        t_list *temp;
        while (list)
        {
            printf("%s\n", (char *)list -> content);
            temp = list -> next;
            free (list);
            list = temp;
        }
    }
    return (0);
}*/
/*parcour la list tant que next ne point pas sur NULL*/