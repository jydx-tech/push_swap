/*header*/

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i = 0;
    if (!s || !f)
        return;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
    return;
}
/*
static void alt_maj(unsigned int i, char *c)
{
    if (*c >= 'A' && *c <= 'Z')
        *c = *c + 32;
    if (i % 2 == 0 && (*c >= 'a' && *c <= 'z'))
        *c = *c - 32;
    return;
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_striteri(argv[1], alt_maj);
        printf("%s\n", argv[1]);
    }
}*/
/*prend une string et la modifie en apliquant une fonction sur chaque caractere*/