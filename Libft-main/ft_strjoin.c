/*header*/

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    size_t  i;
    size_t  j;

    i = 0;
    if (!s1 || !s2)
        return (NULL);
    res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!res)
        return (NULL);
    while (s1[i])
    {
        res[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        res[i + j] = s2[j];
        j++;
    }
    res[i + j] = '\0';
    return (res);
}
/*
int main(int argc, char **argv)
{
    char *join;

    if (argc == 3)
    {
        join = ft_strjoin(argv[1], argv[2]);
        printf("result of strjoin: %s\n", join);
        free (join);
    }
    return (0);
}*/
/*concatene 2 string, en allouant de la memoire avec malloc de la taille des 2 strings
check si les string sont null*/