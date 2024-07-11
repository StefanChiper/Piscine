/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiper <schiper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:25:22 by schiper           #+#    #+#             */
/*   Updated: 2024/07/11 16:40:41 by schiper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;
	int	c_commands;

	index = 1;
	while (index < argc)
	{
		c_commands = 0;
		while (argv[index][c_commands] != '\0')
			write(1, &argv[index][c_commands++], 1);
		write(1, "\n", 1);
		index++;
	}
	return (0);
}
