/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:55:37 by juvilleg          #+#    #+#             */
/*   Updated: 2023/08/28 12:24:39 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	dest;
	char	find;
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		dest = str;
		find = to_find;
		while (to_find[j] != '\0' && str[i] == to_find[j])
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (str);
		i++;
	}
	return (0);
}
