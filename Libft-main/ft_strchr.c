/*header*/

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    }
    if ( (char)c== '\0')
        return ((char *)&s[i]);
    return (NULL);
}
/*
int main(int argc, char **argv)
{
    char *res;

    if (argc == 3)
    {
        res = ft_strchr(argv[1], argv[2][0]);
        printf("string: %s\n", argv[1]);
        printf("to search: %c\n", argv[2][0]);
        res = ft_strchr(argv[1], argv[2][0]);
        printf("res: %s\n", res);
    }
    return (0);
}*/
/*Elle parcourt une chaîne de caractères à la recherche de la première occurrence d'un caractère spécifique.
L'argument c est un int, mais la fonction doit comparer s[i] avec (char)c. C'est important pour la précision des types.
on reçoit une chaîne const char * mais qu'on doit renvoyer un char * (non constant), on doit "forcer" le type (faire un cast) lors du return
Si on cherche le caractère nul (\0), la fonction doit renvoyer un pointeur sur le \0 */