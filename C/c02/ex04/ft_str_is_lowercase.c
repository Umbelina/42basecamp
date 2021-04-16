/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unazaret <unazaret@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:49:42 by unazaret          #+#    #+#             */
/*   Updated: 2021/04/15 17:57:06 by unazaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;
	int count;

	i = 0;
	while (i < str[i])
	{
		count = str[i];
		if (!((count >= 'a' && count <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
