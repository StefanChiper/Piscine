/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:33:21 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/11 14:33:23 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	x;

	if (!(nb % 2) || !(nb % 3))
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

int	get_upper_limit(int nb)
{
	int	upper;
	int	x;

	x = 2;
	upper = 1;
	while (upper <= nb)
	{
		if (upper < 0)
			return (2147483647);
		if (ft_is_prime(x))
			upper *= x;
		x++;
	}
	return (upper + 1);
}

int	ft_find_next_prime(int nb)
{
	int	upper;
	int	p;

	upper = get_upper_limit(nb);
	p = nb;
	if (p % 2 == 0)
		p++;
	while (p < upper)
	{
		if (ft_is_prime(p))
			return (p);
		p += 2;
	}
	return (0);
}

/* int	main(void) */
/* { */
/* 	printf("%d\n", ft_find_next_prime(6)); */
/* 	printf("%d\n", ft_find_next_prime(100)); */
/* 	printf("%d\n", ft_find_next_prime(1000)); */
/* 	printf("%d\n", ft_find_next_prime(30000)); */
/* 	printf("%d\n", ft_find_next_prime(600000)); */
/* 	printf("%d\n", ft_find_next_prime(7000000)); */
/* 	printf("%d\n", ft_find_next_prime(20000000)); */
/* 	printf("%d\n", ft_find_next_prime(800000000)); */
/* 	printf("%d\n", ft_find_next_prime(1000000000)); */
/* 	printf("%d\n", ft_find_next_prime(1000050000)); */
/* 	printf("%d\n", ft_find_next_prime(2000000012)); */
/* 	printf("%d\n", ft_find_next_prime(2000000034)); */
/* 	return (0); */
/* } */
