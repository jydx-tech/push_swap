/*header*/

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char    *res;
    int len;
    int i;

    if(!s1)
        return (NULL);
    if(!set)
        return(ft_strdup(s1));
    i = 0;
    len = ft_strlen(s1);
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    while (len > i && ft_strchr(set, s1[len - 1]))
        len--;
    if (i == len)
        return (ft_strdup(""));
    len = len - i;
    res = ft_substr(s1, (unsigned int) i, (size_t)len);
    return (res);
}
/*
int main(int argc, char **argv)
{
    char *exemple;
    
    if (argc == 3)
    {
        exemple = ft_strtrim(argv[1], argv[2]);
        printf("exemple: %s\n", exemple);
        free (exemple);
    }
    return (0);
}*/
/*retire les caratere de set en debut et fin de s1
check pas s1 reourne null
check pas de set retourne strdup de s1
check si apres nettoyage plus de string, renvoi une string que l'on peut free*/
