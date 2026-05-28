/*header*/

#include "ft_printf.h"

int ft_print_h(unsigned long long ptr)
{
    int count;
    char *base;

    count = 0;
    base = "0123456789abcdef";

    if (ptr >= 16)
        count += ft_print_h(ptr / 16);
    count += write(1, &base[ptr % 16], 1);
    return (count);
}

int ft_print_ptr(unsigned long long ptr)
{
    int count;

    count = 0;
    count += write(1, "0x",2);
    if (!ptr)
        count += write(1, "0", 1);
    count += ft_print_h(ptr);
    return (count);
}