/*header*/

#include "ft_printf.h"

int ft_print_nbr(int nb)
{
    int count;

    count = 0;
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return (11);
    }
    if (nb < 0)
    {
       count += write(1, "-", 1);
       nb = -nb;
    }
    if (nb >= 10)
        count += ft_print_nbr(nb / 10);
    count += write(1, &"0123456789"[nb % 10], 1);
    return (count);
}