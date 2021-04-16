/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unazaret <unazaret@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:07:01 by unazaret          #+#    #+#             */
/*   Updated: 2021/04/15 17:58:06 by unazaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;
	int count;

	i = 0;
	while (i < str[i])
	{
		count = str[i];
		if (!((count >= 'a' && count <= 'z') || (count >= 'A' && count <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
