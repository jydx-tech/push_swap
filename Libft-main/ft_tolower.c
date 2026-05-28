/*header*/

#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}
/*
#include <stdlib.h>

int main(int argc, char **argv)
{
    int res;
    if (argc == 2)
    {
        res = ft_tolower((argv[1][0]));
        printf("lower = %c \n", res);
    }
    return (0);
}*/
/*si majusule devient minuscule*/