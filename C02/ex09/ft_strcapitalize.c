/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:03:03 by erian             #+#    #+#             */
/*   Updated: 2024/07/06 16:23:47 by erian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
int	iss_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && !iss_alpha(str[i]))
			i++;
		if (str[i] && ((str[i] >= 'a') && (str[i] <= 'z')))
			str[i] = ((str[i] - 'a') + 'A');
		i++;
		while (str[i] && iss_alpha(str[i]))
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z'))
				str[i] = ((str[i] - 'A') + 'a');
			i++;
		}
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux";
	int	i;

	i = 0;
	ft_strcapitalize(str);
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}
*/
