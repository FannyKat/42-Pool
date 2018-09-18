/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_integer_table.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 12:08:31 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/17 02:47:49 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_sort_integer_table(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
	while (tab[i] < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tab[i];
			i = 0;
		}
			i++;
	}
}
