/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 15:41:05 by pauljull          #+#    #+#             */
/*   Updated: 2018/09/16 20:23:27 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	top_rectangle3(int x, char **addr)
{
	int	nx;

	nx = 1;
	**addr = 'A';
	(*addr)++;
	if (x > 2)
	{
		while (nx < (x - 1))
		{
			**addr = 'B';
			(*addr)++;
			nx++;
		}
	}
	if (x > 1)
	{
		**addr = 'C';
		(*addr)++;
	}
	**addr = '\n';
	(*addr)++;
}

void	end_rectangle3(int x, char **addr)
{
	int	nx;

	nx = 1;
	**addr = 'A';
	(*addr)++;
	if (x > 2)
	{
		while (nx < (x - 1))
		{
			**addr = 'B';
			(*addr)++;
			nx++;
		}
	}
	if (x > 1)
	{
		**addr = 'C';
		(*addr)++;
	}
	**addr = '\n';
	(*addr)++;
}

void	space3(int x, char **addr)
{
	int	nx;

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

void	rush3(int x, int y, char **addr)
{
	int	ny;

	ny = 1;
	if (x >= 0)
	{
		top_rectangle3(x, addr);
		if (y > 2)
		{
			while (ny < (y - 1))
			{
				**addr = 'B';
				(*addr)++;
				space3(x, addr);
				ny++;
				if (x > 1)
				{
					**addr = 'B';
					(*addr)++;
				}
				*((*addr))++ = '\n';
			}
		}
		if (y > 1)
			end_rectangle3(x, addr);
	}
}

char	*colle03(int x, int y)
{
	char	*str;
	char	*tmp;

	str = (char*)malloc(sizeof(char) * ((x * y) + 1));
	tmp = str;
	rush3(x, y, &str);
	*str = 0;
	return (tmp);
}
