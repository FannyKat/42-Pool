/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 10:56:52 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/18 12:26:30 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H

# define FT_POINT_H

typedef struct	s_point
{
	int		x;
	int		y;
}				t_point;

void			set_point(t_point *point);

#endif
