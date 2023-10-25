/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:45:23 by juvilleg          #+#    #+#             */
/*   Updated: 2023/08/28 16:54:38 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fst;

	fst = 1;
	if (nb >= 0)
	{
		while (nb > 0)
		{
			fst = (nb * fst);
			nb--;
		}
		return (fst);
	}
	else
		return (0);
}
