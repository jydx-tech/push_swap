/*header*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
    int i;
    char    *res;

    i = 0;
    res = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!res)
        return (NULL);
    while (s[i])
    {
        res[i] = s[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}
/*
int main(int argc, char **argv)
{
    char *copie;
    if (argc == 2)
    {
        copie = ft_strdup(argv[1]);
        if (copie == NULL)
            printf("fail copie NULL");
        printf("copie of argv: %s\n", copie);
        free (copie);
    }
    return (0);
}*/
/*prend une chaîne de caractères en entrée, calcule sa taille, alloue la mémoire nécessaire + 1, et y recopie le contenu (incluant le caractère nul \0)*/