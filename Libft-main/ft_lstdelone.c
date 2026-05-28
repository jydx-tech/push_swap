/*header*/

#include "libft.h"

void    del(void *content)
{
    free(content);
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst || !del)
        return;
    del(lst -> content);
    free (lst);
}
/*On utilise la fonction 'del' pour libérer le contenu du nœud
on free le noeud
pas de main car montrer un truc n'existant plus...*/