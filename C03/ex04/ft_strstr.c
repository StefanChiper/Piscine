/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:31:47 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/09 18:36:04 by maturetz         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	if (to_find[f] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + f] == to_find[f] && str[i + f] != '\0')
			f++;
		if (ft_strlen(to_find) == f)
			return (str + i);
		f = 0;
		i++;
	}
	return (0);
}

/* int	main()
{
	char	haystack[] = "Hello, world! This is a test.";
	char	needle[] = "world";

	char	*result = ft_strstr(haystack, needle);

	if (result)
	{
		printf("Substring found at index: %ld\n", result - haystack);
		printf("Substring: %s\n", result);
	}
	else
	{
		printf("Substring not found.\n");
	}

	return 0;
} */
