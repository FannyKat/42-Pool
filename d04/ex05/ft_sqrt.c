/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:34:23 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/05 23:01:59 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int n;

	n = 1;
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return (n);
	return (0);
}