/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:32:20 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/09 18:35:54 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((int)s1[i] - (int)s2[i]);
}

/* int	main()
{
	char str1[] = "Hello";
	char str2[] = "Hello";

	int result = ft_strcmp(str1, str2);

	if (result == 0) {
		printf("Strings are equal\n");
	} else if (result < 0) {
		printf("String 1 is less than String 2\n");
	} else {
		printf("String 1 is greater than String 2\n");
	}
  
	return 0;
} */
