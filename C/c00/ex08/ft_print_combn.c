/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unazaret <unazaret@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:35:28 by unazaret          #+#    #+#             */
/*   Updated: 2021/04/08 17:37:30 by unazaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_tab(int *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

int		ft_check(int *tab, int n)
{
	int i;
	int ok;
	int ant;

	i = 0;
	ok = 1;
	ant = -1;
	while (i < n)
	{
		if (ant >= tab[i])
			ok = 0;
		ant = tab[i];
		i++;
	}
	return (ok);
}

void	ft_print_combn(int n)
{
	int tab[n];
	int i;
	int primeiro;

	i = 0;
	primeiro = 1;
	while (n > 0 && n < 10)
	{
		while (tab[0] < 9)
		{
			if (!primeiro)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			primeiro = 0;
		}
	}
}
