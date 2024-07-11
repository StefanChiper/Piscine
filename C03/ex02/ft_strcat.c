/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:32:02 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/09 18:35:37 by maturetz         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	is;
	int	t;

	is = (ft_strlen(dest));
	t = 0;
	while (src[t] != '\0')
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
	char	str1[50] = "Hello, ";
	char	str2[] = "world!";

	printf("Before strcat:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	ft_strcat(str1, str2);

	printf("\nAfter strcat:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	return 0;
} */
