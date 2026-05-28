/*header*/

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (s2[0] == '\0')
        return ((char *)s1);
    while (s1[i] && i < n)
    {
        j = 0;
        if (s1[i] == s2[j])
        {
            while ((i + j) < n && s2[j])
            {
                if (s1[i + j] == s2[j])
                    j++;
                else
                    break;
            }
            if (s2[j] == '\0')
                return ((char*)&s1[i]);
        }
        i++;
    }
    return (NULL);
}
/*
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        printf("inside : %s\n", argv[1]);
        printf("find the start of: %s\n", argv[2]);
        printf("so it's start here: %s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
    }
    return (0);
}*/
/*cherche s2 ds s1 mais pas ds plus de n caractere ds s1
retourne un pointeur sur l'adresse de debut ds s1 si trouve*/