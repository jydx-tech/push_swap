/*header*/

#include "ft_printf.h"

int ft_selection(va_list args, char c)
{
    int count;
    count = 0;

    if (c == 'c')
        count += ft_print_char(va_arg(args, int));
    if (c == 's')
        count += ft_print_str(va_arg(args, char *));
    if (c == 'p')
        count += ft_print_ptr(va_arg(args, unsigned long long));
    if (c == 'd' || c == 'i')
        count += ft_print_nbr(va_arg(args, int));
    if (c == 'u')
        count += ft_unsigned_int(va_arg(args, unsigned int));
    if (c == 'x' || c == 'X')
        count += ft_print_hex(va_arg(args, unsigned int), c);
    if (c == '%')
        count += ft_printpourcent();
    return (count);
}