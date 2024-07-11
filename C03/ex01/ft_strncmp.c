/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maturetz <maturetz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:32:09 by maturetz          #+#    #+#             */
/*   Updated: 2024/07/09 18:35:57 by maturetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/* int  main(void)
{
	char str[] = "helloWorld";
	char str1[] = "hello";
	int res = ft_strncmp(str, str1, 5);
	printf("%d\n", res);
	printf("%d\n", strncmp(str, str1, 5));
	return (0);
} */