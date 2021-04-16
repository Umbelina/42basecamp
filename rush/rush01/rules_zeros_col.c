/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_zeros_col.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:31:37 by jfranchi          #+#    #+#             */
/*   Updated: 2021/04/12 02:22:50 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check_columns(char m[4][4])
{
	int i;
	int j;
	int a;
	int b;
	int sum;
	int result;
	int counter;
	int count_zero;

	j = 0;
	while (j < 4)
	{
		i = 0;
		counter = 0;
		result = 0;
		sum = 0;
		count_zero = 0;
		while (i < 4)
		{
			if (m[i][j] == '0' && count_zero < 1)
			{
				a = i;
				b = j;
				count_zero++;
			}
			if (m[i][j] != '0')
			{
				result = (m[i][j]) - '0';
				sum = sum + result;
				counter++;
			}
			i++;
		}
		if (counter == 3)
		{
			if (sum == 6)
				m[a][b] = '4';
			else if (sum == 7)
				m[a][b] = '3';
			else if (sum == 8)
				m[a][b] = '2';
			else if (sum == 9)
				m[a][b] = '1';
		}
		j++;
	}
}
