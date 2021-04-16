/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unazaret <unazaret@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:42:36 by unazaret          #+#    #+#             */
/*   Updated: 2021/04/09 21:50:25 by unazaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	int i;
	int j;
	int a;

	a = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
		if (n == -2147483648)
		{
			a = n - (n % 10);
			n = n + (n % 10);
			ft_putchar(n);
			ft_putchar(a);
		}
	}
	j = 1;
	i = n / 10;
	while (i > 0)
	{
		i = i / 10;
		j = j * 10;
	}
	while (j > 0)
	{
		ft_putchar(n / j + '0');
		n = n % j;
		j = j / 10;
	}
}
