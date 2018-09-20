/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 21:21:15 by pauljull          #+#    #+#             */
/*   Updated: 2018/09/16 21:21:19 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H

# define FT_RUSH_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

t_list				*ft_create_elem(char data);
void				ft_list_push_back(t_list **begin_list, char data);
int					ft_list_size(t_list *list);
char				*colle00(int x, int y);
char				*colle01(int x, int y);
char				*colle02(int x, int y);
char				*colle03(int x, int y);
char				*colle04(int x, int y);
void				colle(int x, int y);
int					ft_strcmp(char *s1, char *s2);
int					ft_strlen(char *str);
char				**ft_split_space(char *str);
t_list				*stdin_to_list(void);
char				*list_to_str(t_list *list);
void				display_match(int n_colle, int x, int y, int *check);
void				compar_str(int x, int y, char *str_stdin);
void				ft_putchar(char c);
int					ft_atoi(char *str);
void				ft_putnbr(int nb);

#endif
