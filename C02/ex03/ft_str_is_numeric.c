/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:05:41 by erian             #+#    #+#             */
/*   Updated: 2024/07/06 14:12:51 by erian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
int	iss_numeric(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(iss_numeric(str[i])))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "1234567890";
	ft_putchar(ft_str_is_numeric(str) + '0');
	return (0);
}
*/
