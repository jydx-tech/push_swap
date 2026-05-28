/*header*/

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char    *res;

    i = 0;
    res = NULL;
    while (s[i])
    {
        if (s[i] == (char)c)
            res = ((char *)&s[i]);
        i++;
    }
    if ( (char)c== '\0')
        return ((char *)&s[i]);
    return (res);
}
/*
int main(int argc, char **argv)
{
    char *res;

    if (argc == 3)
    {
        printf("string: %s\n", argv[1]);
        printf("to search: %c\n", argv[2][0]);
        res = ft_strrchr(argv[1], argv[2][0]);
        printf("res: %s\n", res);
    }
    return (0);
}*/
/*pareil que strchr mais renvoi l'adresse de la derniere occurence*/