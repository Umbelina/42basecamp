/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unazaret <unazaret@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:09:22 by unazaret          #+#    #+#             */
/*   Updated: 2021/04/15 17:56:51 by unazaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	count;

	i = 0;
	while (str[i])
	{
		count = str[i];
		if (!((count >= 32 && count <= 126)))
			return (0);
		i++;
	}
	return (1);
}
