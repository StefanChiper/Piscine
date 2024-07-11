/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiper <schiper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:16:21 by schiper           #+#    #+#             */
/*   Updated: 2024/07/10 09:35:01 by schiper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	error_check(char *dest)
{
	unsigned int	occurence[130];
	int				index;

	index = 0;
	while (index <= 129)
	{
		occurence[index] = 0;
		index++;
	}
	index = 0;
	while (*dest != '\0')
	{
		if (*dest < 'a' || *dest > 'z')
			if (*dest < 'A' || *dest > 'Z')
				if (*dest < '0' || *dest > '9')
					return (0);
		occurence[(int)*dest]++;
		if (occurence[(int)*dest] > 1)
			return (0);
		dest++;
		index++;
	}
	return (index);
}

char	*check_for_sign(char *str, int *sign)
{
	*sign = 1;
	while (*str != '\0' && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			*sign *= -1;
		str++;
	}
	return (str);
}

int	match_digits(char digit, char *base)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
	{
		if (digit == base[count])
			return (count);
		count++;
	}
	return (-1);
}

char	*ft_isspace(char *str)
{
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	return (str);
}

int	ft_atoi_base(char *str, char *base)
{
	int	number;
	int	base_lenght;
	int	sign;
	int	index;

	number = 0;
	base_lenght = error_check(base);
	if (base_lenght > 1)
	{
		str = ft_isspace(str);
		str = check_for_sign(str, &sign);
		index = 0;
		while (match_digits(str[index], base) != -1)
		{
			number = (number * base_lenght) + match_digits(str[index], base);
			index++;
		}
		return (number * sign);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi_base("	+++++--133742", "0123456789"));
// 	printf("%d\n", ft_atoi_base("			---101010", "01"));
// 	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
// 	return (0);
// }
