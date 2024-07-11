/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfreyer <kfreyer@student.42wolfsburg.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:32:02 by kfreyer           #+#    #+#             */
/*   Updated: 2024/07/11 14:32:05 by kfreyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_sqrt(int nb);

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	return (0);
}

int	ft_sqrt(int nb)
{
	int	res;
	int	j;
	int	temp;

	res = 0;
	j = (32 / 2 - 1);
	while (j >= 0)
	{
		temp = ft_recursive_power(2, j);
		if (ft_recursive_power(res + temp, 2) <= nb)
			res += temp;
		j--;
	}
	if (ft_recursive_power(res, 2) == nb)
		return (res);
	return (0);
}

/* int	main(void) */
/* { */
/* 	printf("sqrt(-1) = %d\n", ft_sqrt(0)); */
/* 	printf("sqrt(0) = %d\n", ft_sqrt(0)); */
/* 	printf("sqrt(1) = %d\n", ft_sqrt(1)); */
/* 	printf("sqrt(2) = %d\n", ft_sqrt(2)); */
/* 	printf("sqrt(3) = %d\n", ft_sqrt(3)); */
/* 	printf("sqrt(4) = %d\n", ft_sqrt(4)); */
/* 	printf("sqrt(5) = %d\n", ft_sqrt(5)); */
/* 	printf("sqrt(6) = %d\n", ft_sqrt(6)); */
/* 	printf("sqrt(7) = %d\n", ft_sqrt(7)); */
/* 	printf("sqrt(8) = %d\n", ft_sqrt(8)); */
/* 	printf("sqrt(9) = %d\n", ft_sqrt(9)); */
/* 	printf("sqrt(10) = %d\n", ft_sqrt(10)); */
/* 	printf("sqrt(11) = %d\n", ft_sqrt(11)); */
/* 	printf("sqrt(12) = %d\n", ft_sqrt(12)); */
/* 	printf("sqrt(13) = %d\n", ft_sqrt(13)); */
/* 	printf("sqrt(14) = %d\n", ft_sqrt(14)); */
/* 	printf("sqrt(15) = %d\n", ft_sqrt(15)); */
/* 	printf("sqrt(16) = %d\n", ft_sqrt(16)); */
/* 	printf("sqrt(17) = %d\n", ft_sqrt(17)); */
/* 	printf("sqrt(18) = %d\n", ft_sqrt(18)); */
/* 	printf("sqrt(19) = %d\n", ft_sqrt(19)); */
/* 	printf("sqrt(20) = %d\n", ft_sqrt(20)); */
/* 	printf("sqrt(21) = %d\n", ft_sqrt(21)); */
/* 	printf("sqrt(22) = %d\n", ft_sqrt(22)); */
/* 	printf("sqrt(23) = %d\n", ft_sqrt(23)); */
/* 	printf("sqrt(24) = %d\n", ft_sqrt(24)); */
/* 	printf("sqrt(25) = %d\n", ft_sqrt(25)); */
/* 	printf("sqrt(26) = %d\n", ft_sqrt(26)); */
/* 	printf("sqrt(27) = %d\n", ft_sqrt(27)); */
/* 	printf("sqrt(28) = %d\n", ft_sqrt(28)); */
/* 	printf("sqrt(29) = %d\n", ft_sqrt(29)); */
/* 	printf("sqrt(30) = %d\n", ft_sqrt(30)); */
/* 	printf("sqrt(31) = %d\n", ft_sqrt(31)); */
/* 	printf("sqrt(32) = %d\n", ft_sqrt(32)); */
/* 	printf("sqrt(33) = %d\n", ft_sqrt(33)); */
/* 	return (0); */
/* } */
