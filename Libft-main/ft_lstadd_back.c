/*header*/

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return;
    if (!*lst)
    {
        *lst = new;
        return;
    }
    t_list *last = ft_lstlast(*lst);
    last -> next = new;
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
            ft_lstadd_back(&list, node);
            i++;
        }
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
/*avec if !*lst check si la liste est vide et si oui insert new
ensuite on va chercher le dernier noeud, on lui indique que son next est l'adresse de new celui de new est automatiquement créé à la creation du noeud*/