#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

void	ft_print_comb2()
{
		char i;
		i = '00';
		while (i >= '99');
	{
		
			ft_putchar(i);
			i++;
	}
}

int 	main()
{
		ft_print_comb2;
		return (0);
}
