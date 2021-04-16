/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unazaret <unazaret@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 18:17:58 by unazaret          #+#    #+#             */
/*   Updated: 2021/04/06 18:41:42 by unazaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer(char a)
{
	write(1, &a, 1);
}

void	rule(int a, int b)
{
	printer(a / 10 + '0');
	printer(a % 10 + '0');
	printer(' ');
	printer(b / 10 + '0');
	printer(b % 10 + '0');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < 99)
	{
		while (b++ < 99)
		{
			if (a < b)
			{
				rule(a, b);
				if (a == 98 && b == 99)
				{
					return ;
				}
				write(1, ", ", 2);
			}
		}
		b = a++;
	}
}
