/*header*/

#include "push_swap.h"
#include <stdarg.h>

static void	ft_putchar_fd_len(char c, int fd, int *len)
{
	write(fd, &c, 1);
	(*len)++;
}

static void	ft_putstr_fd_len(char *s, int fd, int *len)
{
	int	i;

	if (!s)
		s = "(null)";
	i = 0;
	while (s[i])
	{
		ft_putchar_fd_len(s[i], fd, len);
		i++;
	}
}

static void	ft_putnbr_fd_len(long nbr, int fd, int *len)
{
	if (nbr < 0)
	{
		ft_putchar_fd_len('-', fd, len);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd_len(nbr / 10, fd, len);
		ft_putnbr_fd_len(nbr % 10, fd, len);
	}
	else
	{
		ft_putchar_fd_len(nbr + '0', fd, len);
	}
}

static void	ft_putfloat_fd_len(double num, int fd, int *len)
{
	long	int_part;
	double	dec_part;
	int		precision;

	precision = 2;
	if (num < 0)
	{
		ft_putchar_fd_len('-', fd, len);
		num = -num;
	}
	int_part = (long)num;
	ft_putnbr_fd_len(int_part, fd, len);
	ft_putchar_fd_len('.', fd, len);
	dec_part = num - (double)int_part;
	while (precision--)
	{
		dec_part *= 10;
		int digit = (int)dec_part;
		ft_putchar_fd_len(digit + '0', fd, len);
		dec_part -= digit;
	}
}

static void	ft_check_format(char format, va_list args, int fd, int *len)
{
	if (format == 'c')
		ft_putchar_fd_len(va_arg(args, int), fd, len);
	else if (format == 's')
		ft_putstr_fd_len(va_arg(args, char *), fd, len);
	else if (format == 'd' || format == 'i')
		ft_putnbr_fd_len(va_arg(args, int), fd, len);
	else if (format == 'f')
		ft_putfloat_fd_len(va_arg(args, double), fd, len);
	else if (format == '%')
		ft_putchar_fd_len('%', fd, len);
}

int	ft_printf_fd(int fd, const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	if (!format)
		return (-1);
	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_check_format(format[i], args, fd, &len);
		}
		else
		{
			ft_putchar_fd_len(format[i], fd, &len);
		}
		i++;
	}
	va_end(args);
	return (len);
}