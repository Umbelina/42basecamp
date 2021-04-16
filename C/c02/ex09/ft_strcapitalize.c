/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unazaret <unazaret@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:43:53 by unazaret          #+#    #+#             */
/*   Updated: 2021/04/15 12:43:57 by unazaret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	str = ft_strlowcase(str);
	if (str[0] != '\0' && (str[0] >= 'a' && str[0] <= 'z'))
		str[0] = str[0] - 32;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '-' || str[i] == '+' || str[i] == '*')
			if (str[i + 1] != '\0')
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
