#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long l;

	l = n;
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l *= -1;
	}
	if (l > 9)
	{
		ft_putnbr_fd((int)(l / 10), fd);
	}
	ft_putchar_fd((int)(l % 10) + 48, fd);
}
