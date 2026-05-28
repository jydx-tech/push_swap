/*header*/

#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}
/*
#include <stdlib.h>

int main(int argc, char **argv)
{
    int res;
    if (argc == 2)
    {
        res = ft_toupper((argv[1][0]));
        printf("up = %c \n", res);
    }
    return (0);
}*/
/*si minuscule devient majuscule*/