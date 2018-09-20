/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14:36:35 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/05 19:45:51 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		nb;
	int		i;
	int		power;

	nb = 0;
	i = 0;
	power = 1;
	while (*str == '\n' || *str == '\r' || *str == '\v' ||
			*str == '\t' || *str == '\f' || *str == ' ')
		str++;
	while (str[i] && str[i + 1])
		i++;
	while (str[i] >= '0' && str[i] <= '9' && i >= 0)
	{
		nb = nb + (str[i] - '0') * power;
		power = power * 10;
		i--;
	}
	if (i > 0 || (i == 0 && (str[i] != '-' && str[i] != '+')))
		return (0);
	if (str[i] == '-')
		nb = -nb;
	return (nb);
}
