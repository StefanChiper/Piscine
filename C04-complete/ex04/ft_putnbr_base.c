/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiper <schiper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:07:27 by schiper           #+#    #+#             */
/*   Updated: 2024/07/09 23:05:42 by schiper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

long long	cast_min(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		return ((long long)nbr * -1LL);
	}
	return ((long long)nbr);
}

int	ft_strlen(char *str)
{
	char const	*pos;

	pos = str;
	while (*pos)
		pos++;
	return ((int)(pos - str));
}

int	error_check(char *dest)
{
	unsigned int	lenght;
	unsigned int	occurence[130];
	int				index;

	index = 0;
	while (index <= 129)
	{
		occurence[index] = 0;
		index++;
	}
	lenght = ft_strlen(dest);
	if (lenght <= 1)
		return (1);
	while (*dest != '\0')
	{
		if (*dest < 'a' || *dest > 'z')
			if (*dest < 'A' || *dest > 'Z')
				if (*dest < '0' || *dest > '9')
					return (1);
		occurence[(int)*dest]++;
		if (occurence[(int)*dest] > 1)
			return (1);
		dest++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char		buffer[20];
	int			index;
	long long	casted_nbr;

	casted_nbr = cast_min(nbr);
	buffer[0] = base[0];
	index = 0;
	if (error_check(base) == 1)
		return ;
	if (casted_nbr < 0)
	{
		casted_nbr *= -1;
		write(1, "-", 1);
	}
	while (casted_nbr > 0)
	{
		buffer[index++] = base[casted_nbr % ft_strlen(base)];
		casted_nbr /= ft_strlen(base);
	}
	if (casted_nbr == 0 && index > 0)
		index--;
	while (index >= 0)
	{
		write(1, &buffer[(index--)], 1);
	}
}

// int	main(void)
// {
// 	char	s[30];
// 	ft_putnbr_base(-12, "01");
// 	printf("\n");
// 	ft_putnbr_base(40, "poneyvif");
// 	printf("\n");
// 	ft_putnbr_base(894867, "0123456789");
// 	printf("\n");
// 	ft_putnbr_base(53, "0123456789abcdef");
// 	printf("\n");
// 	ft_putnbr_base(0, "0123456789abcdef");
// 	printf("\n");
// 	ft_putnbr_base(90, s);
// 	printf("\n");
// 	ft_putnbr_base(-2147483648, "0123456789");
// 	return (0);
// }
