/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unazaret <unazaret@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:38:31 by unazaret          #+#    #+#             */
/*   Updated: 2021/04/15 17:57:44 by unazaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;
	int count;

	i = 0;
	while (i < str[i])
	{
		count = str[i];
		if (!((count >= '0' && count <= '9') || (*str == 32)))
			return (0);
		i++;
	}
	return (1);
}
