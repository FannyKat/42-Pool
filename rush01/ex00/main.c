/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 18:11:04 by darbib            #+#    #+#             */
/*   Updated: 2018/09/09 22:12:51 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_checkcase(char **sudotab, int pos);
int		ft_onesol(char **sudotab);

short	ft_number_check(char *str)
{
	short	format_ok;
	int		i;

	i = 0;
	format_ok = 1;
	while (format_ok && str[i])
	{
		if (!((str[i] >= '1' && str[i] <= '9') || str[i] == '.'))
			format_ok = 0;
		i++;
	}
	if (i != 9)
		format_ok = 0;
	return (format_ok);
}

void	ft_dot_to_zero(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '.')
			str[i] = '0';
		i++;
	}
}

void	ft_display(char **str)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (str[j] != '\0')
		{
			ft_putchar(str[i][j]);
			if (str[i][j] != '\0')
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_call_display(short format_ok, char **av)
{
	if (format_ok && ft_onesol(av))
	{
		if (ft_checkcase(av, 0))
			ft_display(av);
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
}

int		main(int ac, char **av)
{
	int		i;
	short	format_ok;

	format_ok = 1;
	if (ac == 10)
	{
		av = av + 1;
		i = 0;
		while (format_ok && i < 9)
		{
			format_ok = ft_number_check(av[i]);
			if (format_ok)
				ft_dot_to_zero(av[i]);
			i++;
		}
		ft_call_display(format_ok, av);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
