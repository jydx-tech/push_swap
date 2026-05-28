/*header*/

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
    va_list args;
    int count;
    int i;

    count = 0;
    i = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            i++;
            count += ft_selection(args, str[i]);
        }
        else
        {
            count += ft_print_char(str[i]);
        }
        i++;
    }
    va_end(args);
    return (count);
}
/*
#include <stdio.h>

int main(void)
{
    int x;
    int count;

    x = 42;
    count = 0;

    count = ft_printf("char      : %c\n", 'A');
    ft_printf("return value: %d\n", count);
    count = printf("expected  : A\n");
    printf("expected return value: %d\n\n", count);

    count = ft_printf("string    : %s\n", "hello");
    ft_printf("return value: %d\n", count);
    count =printf("expected  : hello\n");
    printf("expected return value: %d\n\n", count);

    count = ft_printf("int       : %d\n", -42);
    ft_printf("return value: %d\n", count);
    count = printf("expected  : -42\n");
    printf("expected return value: %d\n\n", count);

    count = ft_printf("int min   : %d\n", -2147483648);
    ft_printf("return value: %d\n", count);
    count = printf("expected  : -2147483648\n");
    printf("expected return value: %d\n\n", count);

    count = ft_printf("unsigned  : %u\n", -1);
    ft_printf("return value: %d\n", count);
    count = printf("expected  : 4294967295\n");
    printf("expected return value: %d\n\n", count);

    count = ft_printf("hex lower : %x\n", 255);
    ft_printf("return value: %d\n", count);
    count = printf("expected  : ff\n");
    printf("expected return value: %d\n\n", count);

    count = ft_printf("hex upper : %X\n", 255);
    ft_printf("return value: %d\n", count);
    count = printf("expected  : FF\n");
    printf("expected return value: %d\n\n", count);

    count = ft_printf("pointer   : %p\n", &x);
    ft_printf("return value: %d\n", count);
    count = printf("expected  : %p\n", &x);
    printf("expected return value: %d\n\n", count);

    count = ft_printf("percent   : %%\n");
    ft_printf("return value: %d\n", count);
    count = printf("expected  : %%\n");
    printf("expected return value: %d\n\n", count);

    count = ft_printf("null str  : %s\n", NULL);
    ft_printf("return value: %d\n", count);
    count = printf("expected  : (null)\n");
    printf("expected return value: %d\n\n", count);

    return (0);
}*/