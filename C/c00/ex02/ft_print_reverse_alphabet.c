/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unazaret <unazaret@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:52:39 by unazaret          #+#    #+#             */
/*   Updated: 2021/04/09 12:13:57 by unazaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char l2;
	char l1;

	l2 = 'z';
	l1 = 'a';
	while (l2 >= l1)
	{
		write(1, &l2, 1);
		l2--;
	}
}
