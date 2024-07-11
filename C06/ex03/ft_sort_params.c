/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiper <schiper@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:24:46 by schiper           #+#    #+#             */
/*   Updated: 2024/07/11 16:42:22 by schiper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_output(char **argc, int index, int limit)
{
	int	i;

	while (index < limit)
	{
		i = 0;
		while (argc[index][i] != '\0')
			write(1, &argc[index][i++], 1);
		index++;
		write(1, "\n", 1);
	}
}

void	swap_commands(char **s1, char **s2)
{
	char	*holder;

	holder = *s1;
	*s1 = *s2;
	*s2 = holder;
}

int	compare_ascii(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] < s2[index])
			return (-1);
		if (s1[index] > s2[index])
			return (index + 1);
		index++;
	}
	if (s1[index] == '\0' && s2[index] != '\0')
		return (-1);
	if (s2[index] == '\0' && s1[index] != '\0')
		return (index + 1);
	return (0);
}

int	main(int argv, char **argc)
{
	int	index;
	int	i;

	index = 1;
	i = 1;
	if (argv == 1)
		return (0);
	if (argv > 2)
	{
		while (i < argv - 1)
		{
			index = 1;
			while (index < argv - 1)
			{
				if (compare_ascii(argc[index], argc[index + 1]) > 0)
					swap_commands(&argc[index], &argc[index + 1]);
				index++;
			}
			i++;
		}
	}
	write_output(argc, 1, argv);
	return (0);
}
