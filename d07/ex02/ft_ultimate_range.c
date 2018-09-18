/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 13:59:03 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/17 17:20:27 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int diff;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		return (0);
	}
	*range = malloc(sizeof(*range) * diff);
	while (i < diff)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (diff);
}
