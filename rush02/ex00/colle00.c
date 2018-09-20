/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 10:16:30 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/16 20:24:22 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void		top_end_rectangle0(int x, char **addr)
{
	int		nx;

	nx = 1;
	**addr = 'o';
	(*addr)++;
	if (x > 2)
	{
		while (nx < (x - 1))
		{
			**addr = '-';
			nx++;
			(*addr)++;
		}
	}
	if (x > 1)
	{
		**addr = 'o';
		(*addr)++;
	}
	**addr = '\n';
	(*addr)++;
}

void		space0(int x, char **addr)
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

void		rush0(int x, int y, char **addr)
{
	int		ny;

	ny = 1;
	if (x >= 0)
	{
		top_end_rectangle0(x, addr);
		if (y > 2)
		{
			while (ny < (y - 1))
			{
				*(*addr)++ = '|';
				space0(x, addr);
				ny++;
				if (x > 1)
				{
					**addr = '|';
					(*addr)++;
				}
				*(*addr)++ = '\n';
			}
		}
		if (y > 1)
			top_end_rectangle0(x, addr);
	}
}

char		*colle00(int x, int y)
{
	char	*str;
	char	*tmp;

	str = (char*)malloc(sizeof(char) * ((x * y) + 1));
	tmp = str;
	rush0(x, y, &str);
	*str = 0;
	return (tmp);
}
