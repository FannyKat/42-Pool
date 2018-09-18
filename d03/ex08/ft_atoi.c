/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14:36:35 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/06 16:11:19 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int		nb;
	int		i;
	int		neg;

	nb = 0;
	i = 0;
	neg = 0;
	while (*str == '\n' || *str == '\r' || *str == '\v' ||
			*str == '\t' || *str == '\f' || *str == ' ')
	{
		str++;
		i++;
	}
	if (str[i] == '-')
	{
		neg = -1;
	}
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb += str[i] - '0';
		i++;
	}
	return ((neg == -1) ? -nb : nb);
}
