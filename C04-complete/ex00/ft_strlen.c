/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiper <schiper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:26:26 by schiper           #+#    #+#             */
/*   Updated: 2024/07/09 14:03:39 by schiper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	char const	*pos;

	pos = str;
	while (*pos)
		pos++;
	return ((int)(pos - str));
}

// int	main(void)
// {
// 	int	a;
// 	a = ft_strlen("");
// 	printf("%d\n", a);
// 	a = ft_strlen("abcde");
// 	printf("%d\n", a);
// 	a = ft_strlen("\0");
// 	printf("%d\n", a);
// 	a = ft_strlen("\n");
// 	printf("%d\n", a);
// 	a = ft_strlen("12357");
// 	printf("%d\n", a);
// 	a = ft_strlen(":)");
// 	printf("%d\n", a);
// 	return (0);
// }
