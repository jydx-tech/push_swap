/*header*/

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *res;
    size_t  i;

    i = 0;
    if (!s)
        return (NULL);
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return (NULL);
    while(s[start +i] && i < len)
    {
        res[i] = s[start + i];
        i++;
    }
    res[i] = '\0';
    return (res);
}
/*
int main(int argc, char **argv)
{
    char *copie;

    if (argc == 4)
    {
        printf("source: %s, start copie at: %d, for size %d\n", argv[1], ft_atoi(argv[2]), ft_atoi(argv[3]));
        copie = ft_substr(argv[1], (unsigned int)ft_atoi(argv[2]), (size_t)ft_atoi(argv[3]));
        printf("copie: %s\n", copie);
        free(copie);
    }
    return (0);
}*/
/*Extraire une sous-chaîne à partir de la chaîne s.
commence à l'index start.
a une longueur maximale de len.
doit allouer la mémoire dynamiquement (malloc).
check si s est null retourne null
check si index de depart + grand que la string retourne une str à free
check si len est plus grand que la str alors limite len à la taille de la str - index de depart*/