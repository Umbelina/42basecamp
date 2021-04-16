/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unazaret <unazaret@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 18:42:36 by unazaret          #+#    #+#             */
/*   Updated: 2021/04/13 16:48:58 by unazaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int i;
	int j;
	int a;

	a = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
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
