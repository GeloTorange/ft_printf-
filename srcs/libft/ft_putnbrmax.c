#include "libft.h"

void	ft_putnbrmax_fd(intmax_t n, int fd)
{
    if (n == -9223372036854775807 - 1)
        write(1, "-9223372036854775808", 20);
    else
    {
        if (n < 0)
        {
            ft_putchar_fd('-', fd);
            n *= -1;
        }
        if (n > 9)
            ft_putnbrmax_fd(n / 10, fd);
        ft_putchar_fd((n % 10) + '0', fd);
    }
}