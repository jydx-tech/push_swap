/*header*/

#include "push_swap.h"

static int count_words(char *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            count++;
            while (s[i] != c && s[i])
                i++;
        }
        i++;
    }
    return (count);
}

static void free_split(char **res, int j)
{
    while(j > 0)
    {
        free (res[j - 1]);
        j--;
    }
    free (res);
    return;
}

static char *split_word(char *s, char c, char **res, int j)
{
    int i;
    int len;
    char *word;

    i = 0;
    len = 0;
    while (s[len] && s[len] != c)
        len++;
    word = malloc(sizeof(char) * (len + 1));
    if (!word)
    {
        free_split(res, j);
        return(NULL);
    }
    while (s[i] && s[i] != c)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    char **res;
    int i;
    int j;

    res = malloc(sizeof(char *) * (count_words((char *)s, c) + 1));
    if (!res || !s)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            res[j] = split_word((char *)&s[i], c, res, j);
            if (!res[j])
                return (NULL);
            j++;
            while (s[i] != c && s[i])
                i++;
        }
        i++;
    }
    res[j] = NULL;
    return (res);
}