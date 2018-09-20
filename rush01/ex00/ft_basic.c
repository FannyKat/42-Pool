/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_onesol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:22:10 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/09 22:21:23 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_onesol(char **sudotab)
{
	int i;
	int j;
	int check;

	check = 0;
	i = 0;
	while (sudotab[i] != '\0')
	{
		j = 0;
		while (sudotab[i][j] != '\0')
		{
			if (sudotab[i][j] != '0')
				check++;
			j++;
		}
		i++;
	}
	if (check < 17)
		return (0);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
