/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:27:01 by juvilleg          #+#    #+#             */
/*   Updated: 2023/08/16 21:01:40 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	ret;

	i = 0;
	ret = 1;
	while (str[i] != '\0' && ret == 1)
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] == '\0'))
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
