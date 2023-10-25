/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:31:25 by juvilleg          #+#    #+#             */
/*   Updated: 2023/08/16 21:05:56 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	ret;

	i = 0;
	ret = 1;
	while (str[i] != '\0' && ret == 1)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] == '\0'))
		{
			ret = 1;
		}
		else
		{
		ret = 0;
		}
		i++;
	}
	return (ret);
}
