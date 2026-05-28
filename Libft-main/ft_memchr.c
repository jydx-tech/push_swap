/*header*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char *str;

    i = 0;
    str = (unsigned char *)s;
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
            return ((void *)&str[i]);
        i++;
    }
    return (NULL);
}
/*
#include <stdlib.h>

int main(int argc, char **argv)
{
    void *res;

    if (argc == 4)
    {
        res = ft_memchr(argv[1], argv[2][0], atoi(argv[3]));
        printf("str : %s\n", argv[1]);
        printf("to search : %c\n", argv[2][0]);
        if(res)
            printf("res : %s\n", (char *)res);
        else
            printf("not here!!!\n");
    }
    return (0);
}*/
/*recherche la premiere occurance d'un octet dans une memoire de taille defini par n
on utilise unsigned char ds le cas ou ds la memoire il y a un -, pour ne pas interpreter comme un négatif 
et surtout char pour travailler octet par octet*/