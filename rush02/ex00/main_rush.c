/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_rush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 15:22:03 by pauljull          #+#    #+#             */
/*   Updated: 2018/09/16 21:36:23 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		main(int ac, char **av)
{
	(void)ac;
	colle(ft_atoi(av[1]), ft_atoi(av[2]));
	return (0);
}