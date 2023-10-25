/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:24:14 by juvilleg          #+#    #+#             */
/*   Updated: 2023/08/16 20:59:40 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	ret;

	i = 0;
	ret = 1;
	while (str[i] != '\0' && ret == 1)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] == '\0')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
