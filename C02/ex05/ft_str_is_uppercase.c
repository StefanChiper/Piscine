/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:29:04 by erian             #+#    #+#             */
/*   Updated: 2024/07/06 14:31:57 by erian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A') && (str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "QWERTY";
	ft_putchar(ft_str_is_uppercase(str) + '0');
	return (0);
}
*/
