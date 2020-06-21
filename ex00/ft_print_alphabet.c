/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llandela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:01:59 by llandela          #+#    #+#             */
/*   Updated: 2020/06/19 16:22:44 by llandela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet()
{
	char i;
	i = 'a';
	while (i >= 'z')
	{
		ft_putchar(i);
		i++;
	}
}

int main()
{
	ft_print_alphabet();
	return (0);
}
