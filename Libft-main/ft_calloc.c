/*header*/

#include "libft.h"

void *ft_calloc( size_t elementcount, size_t elementsize)
{
    void *res;

    res = malloc(elementcount * elementsize);
    if (!res)
        return (NULL);
    ft_bzero(res, elementcount * elementsize);
    return (res);
}
/*
int main(int argc, char **argv)
{
    size_t  count;
    size_t  size;
    unsigned char *tab;
    size_t  i;

    i = 0;
    if (argc == 3)
    {
        count = (size_t)ft_atoi(argv[1]);
        size = (size_t)ft_atoi(argv[2]);

        printf("allocation of %zu element of size %zu\n", count, size);
        tab = (unsigned char *)ft_calloc(count, size);
        if (tab == NULL)
            printf("allocation fail NULL");
        while (i < count * size)
        {
            printf("position in tab: %zu : %u\n", i, tab[i]);
            i++;
        }
        free (tab);
    }
    return (0);
}*/
/*fait un malloc, alloue de la memoire en la remplissant de 0*/