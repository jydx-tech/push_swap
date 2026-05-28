/*header*/

#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c<= 126)
        return (1);
    return (0);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("is print? %d\n", ft_isprint(argv[1][0]));
    }
    return (0);
}*/
/*retourne 1 si c est affichable*/