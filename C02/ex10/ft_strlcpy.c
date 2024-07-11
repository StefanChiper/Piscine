/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:25:38 by erian             #+#    #+#             */
/*   Updated: 2024/07/08 11:27:37 by erian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	while (src[i] && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (src_len);
}
/*
int	main(void)
{
	char	str1[] = "salut, comment tu vas ? 42mots quarante-deux";
	char	str2[100];
	int	i;

	i = 0;
	ft_strlcpy(str2, str1, 9);
	while (str2[i])
	{
		ft_putchar(str2[i]);
		i++;
	}
	return (0);
}
*/
