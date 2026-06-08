/*header*/

#include "push_swap.h"

static int count_words(char *s, char c)
{
    int i;
    int count;

    if (!s)
        return (0);
    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            count++;
            while (s[i] && s[i] != c)
                i++;
        }
        else
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
static void fill_res(char **res, char const *s, char c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            res[j] = split_word((char *)&s[i], c, res, j);
            if (!res[j])
                return ;
            j++;
            while (s[i] && s[i] != c)
                i++;
        }
        else
            i++;
    }
    res[j] = NULL;
}

char **ft_split(char const *s, char c)
{
    char **res;
    int count;

    if (!s)
        return (NULL);
    count = count_words((char *)s, c);
    res = malloc(sizeof(char *) * (count + 1));
    if (!res)
        return (NULL);
    fill_res(res, s, c);
    return (res);
}
