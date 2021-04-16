/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unazaret <unazaret@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:48:50 by unazaret          #+#    #+#             */
/*   Updated: 2021/04/15 14:54:20 by unazaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	unsigned int res;
	int sign;
	unsigned int i;

	res = 0;
	sign = 1;
	i = 0;

	while (str[i] == ' ')
	{
		i++;
	}
	/*if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i++] == '-');
	}*/
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		sign = 1;
		i++;
	}
	
	while (str[i])
	{	
		res = res * 10 + str[i] - '0';
		i++;
	}
	return(sign*res);
}
