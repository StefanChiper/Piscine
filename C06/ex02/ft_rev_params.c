/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiper <schiper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:30:31 by schiper           #+#    #+#             */
/*   Updated: 2024/07/10 15:30:46 by schiper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c_commands;

	argc--;
	while (0 < argc)
	{
		c_commands = 0;
		while (argv[argc][c_commands] != '\0')
			write(1, &argv[argc][c_commands++], 1);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
