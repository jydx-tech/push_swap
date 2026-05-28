/*header*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    unsigned char *res;
    unsigned char *source;

    if (!dest && !src)
        return (NULL);
    i = 0;
    res = (unsigned char *)dest;
    source = (unsigned char *)src;
    while (i < n)
    {
        res[i] = source[i];
        i++;
    }
    return (res);
}
/*
int main()
 {
    char dest[20] = "Hello 42 ca va ?";
    char src[20] = "bonjour 42 ****";

    printf("before : %s\n", dest);
    ft_memcpy(dest, src, 8);
    printf("After : %s\n", dest);
    return 0;
}*/
/*Elle copie n octets depuis une zone mémoire src (source) vers une zone mémoire dst (destination).
Contrairement à strcpy qui s'arrête dès qu'elle voit un \0, memcpy s'en fiche : elle copie aveuglément la quantité exacte d'octets demandé
Comme les paramètres sont de type void *, on ne peut pas les manipuler directement 
(le compilateur ne sait pas quelle est la taille d'un void). 
Pour copier octet par octet, on doit les "caster" en unsigned char *.*/