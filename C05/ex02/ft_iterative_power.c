/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:07:20 by juvilleg          #+#    #+#             */
/*   Updated: 2023/08/29 11:41:08 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	fst;

	fst = 1;
	if (power >= 0)
	{
		while (power > 0)
		{
			fst = (nb * fst);
			power--;
		}
		return (fst);
	}
	else
		return (0);
}
