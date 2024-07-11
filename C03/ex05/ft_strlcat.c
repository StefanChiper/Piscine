/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:31:36 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/09 18:36:07 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	destlen;

	i = 0;
	x = 0;
	destlen = ft_strlen(dest);
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0' && x < size - destlen && size > destlen)
	{
		dest[i + x] = src[x];
		x++;
	}
	if (size > 0 && destlen <= size)
		dest[i + x] = '\0';
	return (destlen + ft_strlen(src));
}

/* int	main()
{
	char	destination[20] = "Hello, ";
	char	source[] = "world!";
	unsigned int	size = sizeof(destination);

	printf("Before ft_strlcat:\n");
	printf("Destination: %s\n", destination);
	printf("Source: %s\n", source);

	unsigned int	result = ft_strlcat(destination, source, size);

	printf("\nAfter ft_strlcat:\n");
	printf("Destination: %s\n", destination);
	printf("Source: %s\n", source);
	printf("Result: %u\n", result);

	return 0;
} */
