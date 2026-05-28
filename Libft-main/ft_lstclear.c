/*header*/

#include "libft.h"

void    del(void *content)
{
    free(content);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if (!lst)
        return;
    t_list *temp;
    while (*lst)
    {
        temp = (*lst) -> next;
        ft_lstdelone(*lst, del);
        *lst = temp;
    }
    *lst = NULL;
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
            t_list *node = ft_lstnew(ft_strdup(argv[i]));
            if(!node)
                return (1);
            ft_lstadd_back(&list, node);
            i++;
        }
        printf("list before sup: \n");
        t_list *test;
        test = list;
        while (test)
        {
            printf("%s\n", (char *)test -> content);
            test = test -> next;
        }
        ft_lstclear(&list, del);
        if (list == NULL)
            printf("all clear\n");
    }
    return (0);
}*/
/*efface toute la liste et la met à NULL
temp pour sauver adresse prochain noeud
utiliser lstdelone pour effacer le noeud*/