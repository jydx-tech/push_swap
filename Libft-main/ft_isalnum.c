/*header*/

#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z') ||(c >= '0' && c<= '9'))
        return (1);
    return (0);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("is alnum? %d\n", ft_isalnum(argv[1][0]));
    }
    return (0);
}*/
/*retourne 1 si c est une lettre ou un chiffre*/