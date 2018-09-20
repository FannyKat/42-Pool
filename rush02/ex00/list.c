/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 14:05:58 by pauljull          #+#    #+#             */
/*   Updated: 2018/09/16 20:30:37 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	while (begin_list)
	{
		count += 1;
		begin_list = begin_list->next;
	}
	return (count);
}

t_list	*ft_create_elem(char data)
{
	t_list	*list;

	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	list->data = data;
	list->next = NULL;
	return (list);
}

void	ft_list_push_back(t_list **begin_list, char data)
{
	t_list	*tmp;
	t_list	*node;

	node = ft_create_elem(data);
	if (*begin_list == NULL)
		*begin_list = node;
	else
	{
		tmp = *begin_list;
		while ((*begin_list)->next)
			*begin_list = (*begin_list)->next;
		(*begin_list)->next = node;
		*begin_list = tmp;
	}
}
