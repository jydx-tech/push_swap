/*header*/

#include "libft.h"

int ft_strncmp( const char * s1, const char * s2, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}
/*
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        printf("first str: %s\n", argv[1]);
        printf("second str: %s\n", argv[2]);
        printf("strncmp = %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
    }
    return (0);
}*/
/*compare caractere par caractere 2 string, 
renvoi la valeur ascii de la difference si les caractere ne sont pas identique
retourne 0 si identique*/