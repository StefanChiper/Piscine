/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiper <schiper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:15:14 by schiper           #+#    #+#             */
/*   Updated: 2024/07/10 15:17:25 by schiper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;

	index = 0;
	if (argc > 0)
	{
		while (argv[0][index] != '\0')
			write(1, &argv[0][index++], 1);
		write(1, "\n", 1);
	}
	return (0);
}
