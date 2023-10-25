/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:28:56 by juvilleg          #+#    #+#             */
/*   Updated: 2023/08/16 21:04:53 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	ret;

	i = 0;
	ret = 1;
	while (str[i] != '\0' && ret == 1)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] == '\0'))
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
