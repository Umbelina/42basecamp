/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unazaret <unazaret@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:17:06 by unazaret          #+#    #+#             */
/*   Updated: 2021/04/15 17:56:40 by unazaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;
	int count;

	i = 0;
	while (str[i])
	{
		count = str[i];
		if (count >= 'a' && count <= 'z')
			str[i] = count - 32;
		i++;
	}
	return (str);
}
