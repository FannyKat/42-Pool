/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:33:41 by pauljull          #+#    #+#             */
/*   Updated: 2018/09/16 21:56:24 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int			ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
}

t_list		*stdin_to_list(void)
{
	char		buff[2];
	t_list		*list;

	list = NULL;
	while (read(0, buff, 1) != 0)
	{
		ft_list_push_back(&list, *buff);
		*(buff + 1) = 0;
	}
	return (list);
}

char		*list_to_str(t_list *list)
{
	char	*str;
	int		size;
	int		i;

	i = 0;
	size = ft_list_size(list) + 1;
	if (!(str = (char*)malloc(sizeof(char) * size)))
		return (0);
	while (list)
	{
		str[i] = list->data;
		i++;
		list = list->next;
	}
	str[i] = '\0';
	return (str);
}

void		compar_str(int x, int y, char *str_stdin)
{
	int		check;

	check = 0;
	if (ft_strcmp(str_stdin, colle00(x, y)) == 0)
		display_match(0, x, y, &check);
	if (ft_strcmp(str_stdin, colle01(x, y)) == 0)
		display_match(1, x, y, &check);
	if (ft_strcmp(str_stdin, colle02(x, y)) == 0)
		display_match(2, x, y, &check);
	if (ft_strcmp(str_stdin, colle03(x, y)) == 0)
		display_match(3, x, y, &check);
	if (ft_strcmp(str_stdin, colle04(x, y)) == 0)
		display_match(4, x, y, &check);
	if (check == 0)
		write(1, "aucune", 6);
	write(1, "\n", 1);
}

int			main(void)
{
	t_list	*list_stdin;
	char	**charss_stdin;
	int		x;
	int		y;

	y = 0;
	list_stdin = stdin_to_list();
	if (ft_list_size(list_stdin) == 0)
	{
		write(1, "aucune\n", 7);
		return (0);
	}
	charss_stdin = ft_split_space(list_to_str(list_stdin));
	x = ft_strlen(charss_stdin[0]);
	while (charss_stdin[y])
	{
		if (ft_strlen(charss_stdin[y]) != x)
		{
			write(1, "aucune\n", 7);
			return (0);
		}
		y += 1;
	}
	compar_str(x, y, list_to_str(list_stdin));
	return (0);
}
