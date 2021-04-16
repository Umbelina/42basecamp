/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unazaret <unazaret@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:24:00 by unazaret          #+#    #+#             */
/*   Updated: 2021/04/15 17:55:03 by unazaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;
	int count;

	i = 0;
	while (i < str[i])
	{
		count = str[i];
		if (count >= 'A' && count <= 'Z')
			str[i] = count + 32;
		i++;
	}
	return (str);
}
