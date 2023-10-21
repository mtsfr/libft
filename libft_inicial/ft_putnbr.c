#include <unistd.h>
#include "libft.h"

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		ft_putnbr(n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0'); 
}

/*int	main(void)
{	
	ft_putnbr(5);
	return (0);
}*/
