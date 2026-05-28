/*header*/

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *res;
    unsigned int i;

    i = 0;
    if (!s || !f)
        return (NULL);
    res = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!res)
        return (NULL);
    while (s[i])
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}
/*
static char alt_maj(unsigned int i, char c)
{
    if (c >= 'A' && c <= 'Z')
        c = c + 32;
    if (i % 2 == 0 && (c >= 'a' && c <= 'z'))
        c = c - 32;
    return (c);
}

int main(int argc, char **argv)
{
    char *test;

    if (argc == 2)
    {
        test = ft_strmapi(argv[1], alt_maj);
        printf("%s\n", test);
        free (test);
    }
}*/
/*prend une string, creer une nouvelle string en appliquant une fonction sur chaque caractere*/