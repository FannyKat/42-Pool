/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 09:25:25 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/06 20:03:56 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int size;
	long long nbr;

	nbr = (int)nb;
	size = 1;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	while (nbr / size >= 10)
	{
		size = size * 10;
	}
	while (size >= 1)
	{
		ft_putchar(nbr / size + '0');
		nbr = nbr % size;
		size = size / 10;
	}
}
