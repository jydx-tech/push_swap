/*header*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  len;

    i = 0;
    len = ft_strlen(src);
    if (size == 0)
        return (len);
    while (src[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
}
/*
int main()
 {
    char dest[20] = "******************";
    char src[20] = "hello 42 ca va ?";
    size_t res;

    printf("before : %s\n", dest);
    res = ft_strlcpy(dest, src, 8);
    printf("After : %s\n", dest);
    printf("len copy: %zu\n", res);
    return 0;
}*/
/*copie du nbre de size de src ds dst
retourne la taille de la src*/