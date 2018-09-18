/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 10:16:30 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/02 11:09:36 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top_rectangle(int x)
{
	int nx;

	nx = 1;
	ft_putchar('A');
	if (x > 2)
	{
		while (nx < (x - 1))
		{
			ft_putchar('B');
			nx++;
		}
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	end_rectangle(int x)
{
	int nx;

	nx = 1;
	ft_putchar('C');
	if (x > 2)
	{
		while (nx < (x - 1))
		{
			ft_putchar('B');
			nx++;
		}
	}
	if (x > 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	space(int x)
{
	int nx;

	nx = 1;
	if (x > 2)
	{
		while (nx < (x - 1))
		{
			ft_putchar(' ');
			nx++;
		}
	}
}

void	rush(int x, int y)
{
	int ny;

	ny = 1;
	if (x > 0)
	{
		top_rectangle(x);
		if (y > 2)
		{
			while (ny < (y - 1))
			{
				ft_putchar('B');
				space(x);
				ny++;
				if (x > 1)
					ft_putchar('B');
				ft_putchar('\n');
			}
		}
		if (y > 1)
		{
			end_rectangle(x);
		}
	}
}
