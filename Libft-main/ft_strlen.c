/*Header*/

#include "libft.h"

size_t  ft_strlen(const char *str)
{
    size_t  i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
/*
#include <stdio.h>

int main(void)
{
    char test[25] = "Coucou les genoux";

    printf("Longueur super array : %d\n", ft_strlen(test));
    return (0);
}*/