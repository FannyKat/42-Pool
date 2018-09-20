/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 14:05:06 by pauljull          #+#    #+#             */
/*   Updated: 2018/09/16 20:31:16 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		ft_putchar('-');
		if (nb > -10)
			ft_putnbr(-nb);
		else
		{
			ft_putnbr(-(nb / 10));
			ft_putchar(-(nb % 10) + '0');
		}
	}
}

void	display_match(int n_colle, int x, int y, int *check)
{
	if (*check == 1)
		write(1, " || ", 4);
	write(1, "[colle-0", 8);
	ft_putnbr(n_colle);
	write(1, "] [", 4);
	ft_putnbr(x);
	write(1, "] [", 4);
	ft_putnbr(y);
	write(1, "]", 1);
	*check = 1;
}
