/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 17:14:32 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/05 16:36:32 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb >= 14)
		return (0);
	while (nb >= 1 && nb <= 13)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
