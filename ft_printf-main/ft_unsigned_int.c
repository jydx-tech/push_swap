/*header*/

#include "ft_printf.h"

int    ft_unsigned_int(unsigned int nb)
{
    int count;

    count = 0;
    if (nb >= 10)
        count += ft_print_nbr(nb / 10);
    count += write(1, &"0123456789"[nb % 10], 1);
    return (count);
}