#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn()
{
		char i;
		i = n;
		while (0 < i < 10)
		{
			ft_putchar(i);
			i++;
		}
}

int	main()
{
	ft_print_combn()
	return (0)
}
