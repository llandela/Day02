/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llandela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:10:28 by llandela          #+#    #+#             */
/*   Updated: 2020/06/19 15:55:59 by llandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet()
{
	char i;
	
	i = 'z';

	while (i >= 'a')
	{
		ft_putchar(i);
		i--;
	}
}

int		main()
{
	ft_print_reverse_alphabet();
	return (0);
}

