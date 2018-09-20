/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 12:20:00 by pauljull          #+#    #+#             */
/*   Updated: 2018/09/16 15:27:07 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	display_line(int x, char c1, char c2, char c3)
{
	int count_x;

	count_x = 1;
	if (x >= 1)
	{
		ft_putchar(c1);
		count_x += 1;
	}
	if (x > 2)
	{
		while (count_x < x)
		{
			ft_putchar(c2);
			count_x += 1;
		}
	}
	if (count_x == x && x > 1)
		ft_putchar(c3);
	if (x > 0)
		ft_putchar('\n');
}

void	colle(int x, int y)
{
	int count_y;

	count_y = 1;
	if (y >= 1)
	{
		display_line(x, 'A', 'B', 'A');
		count_y += 1;
	}
	if (y > 2)
	{
		while (count_y < y)
		{
			display_line(x, 'B', ' ', 'B');
			count_y += 1;
		}
	}
	if (y > 1 && count_y == y)
		display_line(x, 'C', 'B', 'C');
}
