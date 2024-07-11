/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:53:52 by erian             #+#    #+#             */
/*   Updated: 2024/07/06 14:56:44 by erian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	int	i;
	char	str[] = "QWERTY";

	ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}
*/
