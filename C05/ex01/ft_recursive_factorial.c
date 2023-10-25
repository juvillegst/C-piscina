/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:56:30 by juvilleg          #+#    #+#             */
/*   Updated: 2023/08/28 18:05:42 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	else if ((nb == 0) || (nb == 1))
		return (1);
	else
		res = (nb * ft_recursive_factorial(nb - 1));
	return (res);
}
