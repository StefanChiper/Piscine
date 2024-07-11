/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiper <schiper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:14:51 by erian             #+#    #+#             */
/*   Updated: 2024/07/11 20:34:31 by schiper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable(char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*c;

	i = 0;
	c = "0123456789abcdef";
	while (str[i])
	{
		if (ft_is_printable(str[i]))
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar(c[(unsigned char)str[i] / 16]);
			ft_putchar(c[(unsigned char)str[i] % 16]);
		}
		i++;
	}
}

// int	main(void)
// {
// 	char	str[] = "Coucou\ntu vas bien\t\v\0 n ?";
// 	ft_putstr_non_printable(str);
// 	return (0);
// }
