/*header*/

#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c<= 127)
        return (1);
    return (0);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("is ascii? %d\n", ft_isascii(argv[1][0]));
    }
    return (0);
}*/
/*retourne 1 si c est ds la table ascii*/