/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiper <schiper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:36:10 by schiper           #+#    #+#             */
/*   Updated: 2024/07/09 23:05:51 by schiper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_putnbr(int nb)
{
	char		buffer[20];
	int			index;
	long long	casted_nb;

	casted_nb = cast_min(nb);
	buffer[0] = '0';
	index = 0;
	if (casted_nb < 0)
	{
		casted_nb *= -1;
		write(1, "-", 1);
	}
	while (casted_nb > 0)
	{
		buffer[index++] = '0' + casted_nb % 10;
		casted_nb /= 10;
	}
	if (casted_nb == 0 && index > 0)
		index--;
	while (index >= 0)
	{
		write(1, &buffer[(index--)], 1);
	}
}

// int	main(void)
// {
// 	ft_putnbr(0);
// 	write(1, "\n", 1);
// 	ft_putnbr(2147483647);
// 	write(1, "\n", 1);
// 	ft_putnbr(-2147483648);
// 	write(1, "\n", 1);
// 	return (0);
// }
