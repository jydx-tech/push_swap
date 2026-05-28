/*header*/

#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("is alpha? %d\n", ft_isalpha(argv[1][0]));
    }
    return (0);
}*/
/*retourne 1 si c est une lettre*/