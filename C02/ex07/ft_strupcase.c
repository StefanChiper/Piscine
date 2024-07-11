/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:42:21 by erian             #+#    #+#             */
/*   Updated: 2024/07/06 14:52:25 by erian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = ((str[i] - 'a') + 'A');
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	int	i;
	char	str[] = "qwerty";

	ft_strupcase(str);
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}
*/
