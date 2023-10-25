/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:40:31 by juvilleg          #+#    #+#             */
/*   Updated: 2023/08/31 13:13:46 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		while (argc > 1)
		{
			i = 0;
			while (argv[argc - 1][i] != 0)
			{
				write(1, &argv[argc - 1][i], 1);
				i++;
			}
			write(1, "\n", 1);
			argc--;
		}
	}
}
