/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:34:41 by juvilleg          #+#    #+#             */
/*   Updated: 2023/08/17 16:33:51 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
		str[i] = str[i] + 32;
		}
		if ((str[i - 1] >= 48 && str[i - 1] <= 57)
			|| (str[i - 1] >= 65 && str[i - 1] <= 90)
			|| (str[i - 1] >= 97 && str[i - 1] <= 122))
		{
		str[i] = str[i];
		}
		else
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
			str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
