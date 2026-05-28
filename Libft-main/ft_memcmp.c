/*header*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *src1;
    unsigned char *src2;
    size_t  i;

    i = 0;
    src1 = (unsigned char *)s1;
    src2 = (unsigned char *)s2;
    while (i < n)
    {
            if (src1[i] != src2[i])
            return (src1[i] - src2[i]);
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
        printf("first argv: %s\n", argv[1]);
        printf("second argv: %s\n", argv[2]);
        printf("memcmp = %d\n", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
    }
    return (0);
}*/
/*Elle compare deux blocs de mémoire (s1 et s2) sur une longueur de n octets.
Elle s'arrête dès qu'elle trouve un octet différent ou qu'elle a fini de lire les n octets.
Comme les paramètres sont de type void *, on ne peut pas les manipuler directement 
(le compilateur ne sait pas quelle est la taille d'un void). 
Pour comparer octet par octet, on doit les "caster" en unsigned char *.*/