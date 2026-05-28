/*header*/

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;
    count = 0;
    while (lst)
    {
        count += 1;
        lst = lst -> next;
    }
    return (count);
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
        printf("nb of node: %d\n", ft_lstsize(list));
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
/*parcour la list en incrementant un compteur*/