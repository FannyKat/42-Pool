/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 04:04:56 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/17 17:02:44 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		count_words(char *str)
{
	int		i;
	int		count;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	count = 0;
	while (str[i])
	{
			count++;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
			i++;
	}
	return (count);
}

char	*ft_strcpy_to_space(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != ' ' && src[i] != '\n' && src[i] != '\t' && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int		c[3];

	c[2] = 0;
	c[0] = 0;
	if (!str && (str = (char*)malloc(sizeof(char*) * (count_words(str) + 1))))
		return (0);
	while (str[c[2]])
	{
		c[1] = 0;
		while (str[c[2]] == ' ' || str[c[2]] == '\n' || str[c[2]] == '\t')
			c[2]++;
		while (str[c[2]] != ' ' && str[c[2]] != '\n' && str[c[2]] != '\t'
				&& str[c[2]])
		{
			c[1]++;
			c[2]++;
		}
		if (c[1] != 0)
		{
			str[c[0]] = (char*)malloc(sizeof(char*) * (c[1] + 1));
			ft_strcpy_to_space(&str[c[0]++], (&str[c[2] - c[1]]));
		}
	}
	str[c[0]] = 0;
	return (&str);
}
/*
char	**ft_split_whitespaces(char *str)
{
	char **tmp;

	if (!str)
		return (0);
	return (ft_split_whitespaces2(str, tmp));
}
*/
int		main(int ac, char **av)
{
	int i =0;
	char **str = (ft_split_whitespaces(av[1]));
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	return 0;
}
