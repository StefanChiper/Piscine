/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiper <schiper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:06:33 by schiper           #+#    #+#             */
/*   Updated: 2024/07/09 23:05:43 by schiper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// // #include <stdlib.h>

int	ft_atoi(char *str)
{
	int	number;
	int	create_number;

	create_number = 0;
	number = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str != '\0' && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			number *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		create_number *= 10;
		create_number += *str - '0';
		str++;
	}
	return (create_number * number);
}

// int	main(void)
// {
// 	int	number;

// 	printf("%d\n", number = ft_atoi("-+2345"));
// 	printf("%d\n", number = atoi("+2345"));
// 	return (0);
// }
