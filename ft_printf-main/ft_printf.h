/*header*/

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int ft_selection(va_list args, char c);
int ft_print_char(int c);
int ft_print_str(char *str);
int ft_print_ptr(unsigned long long ptr);
int ft_print_nbr(int nb);
int ft_unsigned_int(unsigned int nb);
int ft_print_hex(unsigned int nb, char c);
int ft_printpourcent();

#endif


