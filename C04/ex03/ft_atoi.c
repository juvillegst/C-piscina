/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:34:11 by juvilleg          #+#    #+#             */
/*   Updated: 2023/08/28 18:16:48 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_thor(int sig, int res, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sig *= -1;
			{
				if ((str[i + 1] < '0' || str[i + 1] > '9')
					&& (str[i + 1] != '+' && str[i + 1] != '-'))
					return (0);
			}
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i] - '0');
			if (str[i + 1] < '0' || str[i + 1] > '9')
				break ;
		}
			i++;
	}
	return (res * sig);
}

int	ft_atoi(char *str)
{
	int	sig;
	int	res;
	int	atoi;
	int	i;

	i = 0;
	res = 0;
	sig = 1;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
	i++;
	atoi = ft_thor(sig, res, str);
	return (atoi);
}
