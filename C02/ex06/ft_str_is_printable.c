/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:38:29 by juvilleg          #+#    #+#             */
/*   Updated: 2023/08/17 16:28:15 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	ret;

	i = 0;
	ret = 1;
	while (str[i] != '\0' && ret == 1)
	{
		if ((str[i] >= 32 && str[i] <= 126) || (str[i] == '\0'))
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
