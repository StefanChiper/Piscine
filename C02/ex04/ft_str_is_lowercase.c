/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:14:32 by erian             #+#    #+#             */
/*   Updated: 2024/07/06 14:19:58 by erian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a') && (str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "qwerty";
	ft_putchar(ft_str_is_lowercase(str) + '0');
	return (0);
}
*/
