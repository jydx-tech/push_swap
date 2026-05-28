/*header*/

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }
    if (n > 9)
        ft_putnbr_fd(n / 10, fd);
    write(fd, &"0123456789"[n % 10], 1);
}
/*
int main(int argc, char **argv)
{
    if (argc == 3)
    {
        ft_putnbr_fd(ft_atoi(argv[1]), ft_atoi(argv[2]));
    }
    return (0);
}*/