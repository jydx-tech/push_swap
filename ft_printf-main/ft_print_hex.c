/*header*/

#include "ft_printf.h"

int ft_print_hex(unsigned int nb, char c)
{
    char    *base;
    int count;

    count = 0;
    if (c == 'X')
        base = "0123456789ABCDEF";
    else
        base = "0123456789abcdef";
    if (nb >= 16)
        count += ft_print_hex(nb / 16, c);
    count += write(1, &base[nb % 16], 1);
    return (count);
}