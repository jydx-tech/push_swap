/*header*/

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *node;

    node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node -> content = content;
    node -> next = NULL;
    return (node);
}
/*
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        t_list *node = ft_lstnew(argv[1]);
        if(!node)
            return (1);
        printf("in the node: %s\n", (char*)node -> content);
        free(node);
    }
    return (0);
}*/
/*ds la structure content = data a sauver en void pour d'importe quel type
next est l adresse du noeud suivant, di c'est le dernier il pointe sue null*/