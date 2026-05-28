/*header*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}
/*
int main()
 {
    char str[20] = "Hello 42 ca va ?";

    printf("before : %s\n", str);
    ft_bzero(str, 5);
    printf("After : %s\n", str);
    printf("After : %s\n", &str[5]);
    return 0;
}*/
/*uttilise memset pour metre des 0 tout les octets d'une zone memoire*/