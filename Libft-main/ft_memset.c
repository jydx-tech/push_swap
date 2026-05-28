/*header*/

#include "libft.h"

void *ft_memset (void *s, int c, size_t n)
{
    size_t  i;
    unsigned char *res;

    i = 0;
    res = (unsigned char *)s;
    while (i < n)
    {
        res[i] = c;
        i++;
    }
    return (res);
}
/*
int main()
 {
    char str[20] = "Hello 42 ca va ?";

    printf("before : %s\n", str);
    ft_memset(str, '*', 5);
    printf("After : %s\n", str);
    return 0;
}*/
/*Elle remplit les n premiers octets de la zone mémoire pointée par s avec l'octet c.
s est un void * car memset doit pouvoir fonctionner sur n'importe quoi (un tableau de int, une struct, une chaîne de caractères, etc.).
on ne peut pas faire d'arithmétique ou d'assignation sur un void *. 
On doit donc créer un pointeur de travail en unsigned char * pour avancer octet par octet (1 octet = 8 bits, la plus petite unité manipulable).*/