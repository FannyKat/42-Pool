/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 22:02:00 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/09 22:12:58 by mgheraie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		absline(int valtest, char **sudotab, int i)
{
	int		j;

	j = 0;
	while (sudotab[i][j] != '\0')
	{
		if (sudotab[i][j] == valtest)
			return (0);
		j++;
	}
	return (1);
}

int		abscol(int valtest, char **sudotab, int j)
{
	int		i;

	i = 0;
	while (sudotab[i] != '\0')
	{
		if (sudotab[i][j] == valtest)
			return (0);
		i++;
	}
	return (1);
}

int		absqr(int valtest, char **sudotab, int i, int j)
{
	int		k;
	int		l;

	k = 3 * (i / 3);
	l = 3 * (j / 3);
	while (k < (3 * (i / 3) + 2))
	{
		while (l < (3 * (j / 3) + 2))
		{
			if (sudotab[k][l] == valtest)
				return (0);
			l++;
		}
		k++;
	}
	return (1);
}

int		ft_checkok(int valtest, char **sudotab, int i, int j)
{
	if (absline(valtest, sudotab, i) == 0)
		return (0);
	else if (abscol(valtest, sudotab, j) == 0)
		return (0);
	else if (absqr(valtest, sudotab, i, j) == 0)
		return (0);
	return (1);
}

int		ft_checkcase(char **sudotab, int pos)
{
	int		i;
	int		j;
	char	valtest;

	if (pos == 9 * 9)
		return (1);
	i = pos / 9;
	j = pos % 9;
	if (sudotab[i][j] != '0')
		return (ft_checkcase(sudotab, pos + 1));
	valtest = '1';
	while (valtest <= '9')
	{
		if (ft_checkok(valtest, sudotab, i, j) == 1)
		{
			sudotab[i][j] = valtest;
			if (ft_checkcase(sudotab, pos + 1) == 1)
				return (1);
		}
		valtest++;
	}
	sudotab[i][j] = '0';
	return (0);
}
