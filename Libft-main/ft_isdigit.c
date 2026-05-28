/*header*/

#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= '0' && c<= '9')
        return (1);
    return (0);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("is digit? %d\n", ft_isdigit(argv[1][0]));
    }
    return (0);
}*/
/*retourne 1 si c est un chiffre*/