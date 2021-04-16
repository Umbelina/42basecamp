int	ft_atoi(char *str)
{
	unsigned int res = 0;
	int sign = 1;
	unsigned int i = 0;

	while (!(str[i] > 47 && str[i] < 58))
	{
		if (str[i] == '-' || str[i] == '+')
		{
			while (str[i] == '-' || str[i] == '+')
			{
				if (str[i-1] == '+' && str[i++] == '+')
				{
					sign = -1;
				}
				else if (str[i] == '-')
				{
					sign = -1;
					i++;
				}
				else if (str[i] == '+')
				{
					sign = 1;
					i++;
				}
			}	
		}
		else
			i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return(sign*res);
}


#include <stdio.h>
#include <stdlib.h>

void    ft_atoi_like_test(char *str)
{
    int buff;
    int ft_buff;
    buff = atoi(str);
    ft_buff = ft_atoi(str);
    if (buff != ft_buff)
        printf("> KO, invalid int value returned. expected: %d got: %d\n", buff, ft_buff);
    else
        printf("> OK. result: %d\n", ft_buff);
}

void    ft_atoi_unlike_test(char *str, int expected_result)
{
    int ft_buff;
    ft_buff = ft_atoi(str);
    if (ft_buff != expected_result)
        printf("> KO, invalid int value returned expected: %d got: %d\n", expected_result, ft_buff);
    else
        printf("> OK, result: %d\n", ft_buff);
}

int		main(void) 
{
    char *str;
    // quando o comportamento e igual ao de atoi
    str = " \n \t \r \v +1234567asd";
    ft_atoi_like_test(str);
    str = " \n \t\f\r \v -1234b67asd";
    ft_atoi_like_test(str);
    // quando o comportamento e diferente ao de atoi
    str = " \n \t \r \v --+-+-+-2147483648asd";
    ft_atoi_unlike_test(str, -2147483648);
    str = " \n \t\f\r \v -++-+-++1234b67asd";
    ft_atoi_unlike_test(str, -1234);
    return (0);
}