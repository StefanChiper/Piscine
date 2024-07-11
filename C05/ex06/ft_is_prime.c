/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:32:58 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/11 14:33:00 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
/* #include <limits.h> */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	x;

	if (nb < 2 || !(nb % 2) || !(nb % 3))
		return (0);
	x = 5;
	while (x * x < nb)
	{
		if (x * x < 0)
			return (1);
		if (!(nb % x))
			return (0);
		x += 2;
	}
	return (1);
}

/* int main() { */
/*     printf("%d is prime: %d\n", 0, ft_is_prime(0)); */
/*     printf("%d is prime: %d\n", 1, ft_is_prime(1)); */
/*     printf("%d is prime: %d\n", -2, ft_is_prime(-2)); */
/*     printf("%d is prime: %d\n", 97, ft_is_prime(97)); */
/*     printf("%d is prime: %d\n", 3671, ft_is_prime(3671)); */
/*     printf("%d is prime: %d\n", 3677, ft_is_prime(3677)); */
/*     printf("%d is prime: %d\n", INT_MAX, ft_is_prime(INT_MAX)); */
/*     printf("%d is prime: %d\n", INT_MAX-1, ft_is_prime(INT_MAX-1)); */
/*     printf("%d is prime: %d\n", INT_MAX-2, ft_is_prime(INT_MAX-2)); */
/*     return (0); */
/* } */
