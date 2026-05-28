/*header*/

#include "libft.h"

static int len_nb(long int n)
{
    int len;

    len = 0;
    if (n <= 0)
    {
        n = -n;
        len++;
    }
    while (n > 0)
    {
        len++;
        n = n /10;
    }
    return (len);    
}

char *ft_itoa(int n)
{
    char *res;
    int len;
    long int nb;

    nb = n;
    len = len_nb(nb);
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return (NULL);
    if (nb < 0)
    {
        res[0] = '-';
        nb = -nb;
    }
    if (n == 0)
        res[0] = '0';
    res[len] = '\0';
    while (nb > 0)
    {
        res[len - 1] = (nb % 10) + '0';
        len--;
        nb = nb / 10;
    }
    return (res);
}
/*
int main(int argc, char **argv)
{
    char *test;

    if (argc == 2)
    {
        test = ft_itoa(ft_atoi(argv[1]));
        printf("resultat: %s\n", test);
        free (test);
    }
    return (0);
}*/
/*transforme un nombre en int en une string
trouver sa taille en / par 10
allouer la memoire
si - position de la string est '-'
remplir par la fin de la string
gerer le tout en long int pour gerer le int min*/