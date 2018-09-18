/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 19:22:15 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/08 11:54:57 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = nb - 1;
	if (nb <= 1)
		return (0);
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	while (!ft_is_prime(nb + i))
	{
		i++;
	}
	return (nb + i);
}
