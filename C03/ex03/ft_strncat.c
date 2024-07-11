/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:31:54 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/09 18:36:02 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	is;
	unsigned int	t;

	is = (ft_strlen(dest));
	t = 0;
	while (src[t] != '\0' && t < nb)
	{
		dest[is] = src[t];
		t++;
		is++;
	}
	dest[is] = '\0';
	return (dest);
}

/* int	main()
{
	char dest[50] = "Hello, ";
	char src[] = "world!";
	unsigned int nb = 3;

	printf("Before ft_strncat: %s\n", dest);
	ft_strncat(dest, src, nb);
	printf("After ft_strncat: %s\n", dest);

	return 0;
} */
