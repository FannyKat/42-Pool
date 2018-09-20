/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 15:18:36 by pauljull          #+#    #+#             */
/*   Updated: 2018/09/16 21:56:45 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	top_rectangle1(int x, char **addr)
{
	int		nx;

	nx = 1;
	**addr = '/';
	(*addr)++;
	if (x > 2)
	{
		while (nx < (x - 1))
		{
			**addr = '*';
			nx++;
			(*addr)++;
		}
	}
	if (x > 1)
	{
		**addr = '\\';
		(*addr)++;
	}
	**addr = '\n';
	(*addr)++;
}

void	end_rectangle1(int x, char **addr)
{
	int		nx;

	nx = 1;
	**addr = '\\';
	(*addr)++;
	if (x > 2)
	{
		while (nx < (x - 1))
		{
			**addr = '*';
			nx++;
			(*addr)++;
		}
	}
	if (x > 1)
	{
		**addr = '/';
		(*addr)++;
	}
	**addr = '\n';
	(*addr)++;
}

void	space1(int x, char **addr)
{
	int		nx;

	nx = 1;
	if (x > 2)
	{
		while (nx < (x - 1))
		{
			**addr = ' ';
			(*addr)++;
			nx++;
		}
	}
}

void	rush1(int x, int y, char **addr)
{
	int		ny;

	ny = 1;
	if (x >= 0)
	{
		top_rectangle1(x, addr);
		if (y > 2)
		{
			while (ny < (y - 1))
			{
				*(*addr)++ = '*';
				space1(x, addr);
				ny++;
				if (x > 1)
					*(*addr)++ = '*';
				*(*addr)++ = '\n';
			}
		}
		if (y > 1)
			end_rectangle1(x, addr);
	}
}

char	*colle01(int x, int y)
{
	char	*str;
	char	*tmp;

	str = (char*)malloc(sizeof(char) * ((x * y) + 1));
	tmp = str;
	rush1(x, y, &str);
	*str = 0;
	return (tmp);
}
