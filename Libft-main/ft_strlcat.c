/*header*/

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  len_dest;
    size_t  len_src;
    size_t  i;

    i = 0;
    len_dest = ft_strlen(dst);
    len_src = ft_strlen(src);
    if (size <= len_dest)
        return (size + len_src);
    while (src[i] && (len_dest + i) < size - 1)
    {
        dst[len_dest + i] = src[i];
        i++;
    }
    dst[len_dest + i] = '\0';
    return (len_dest + len_src);
}
/*
#include <stdlib.h>

int main(int argc, char **argv)
{
    size_t ret;

    if (argc == 4)
    {
        printf("dest before = %s\n", argv[1]);
        printf("src before = %s\n", argv[2]);
        ret = ft_strlcat(argv[1], argv[2], atoi(argv[3]));
        printf("return = %zu\n", ret);
        printf("dest after = %s\n", argv[1]);
    }
    return (0);
}*/
/*Elle ajoute la chaîne src à la fin de dst, mais avec une limite stricte de taille dstsize.
Elle renvoie la longueur totale de la chaîne qu'elle a essayé de créer.*/