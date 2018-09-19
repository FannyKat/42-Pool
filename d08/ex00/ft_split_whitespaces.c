/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:56:46 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/17 17:18:39 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_separator(char *str)
{
	int		i;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		i++;
	return (i);
}

int		count_letter(char *str)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		i++;
	return (i);
}

int		count_word(char *str)
{
	int		count;

	count = 0;
	str += count_separator(str);
	while (*str)
	{
		count++;
		str += count_letter(str);
		str += count_separator(str);
	}
	return (count);
}

char	*ft_strcpy_to_space(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] && src[i] != ' ' && src[i] != '\n' && src[i] != '\t')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int		word_count;
	char	**tab;
	int		i;

	if (!str || !(tab = (char **)malloc(sizeof(*tab) * (count_word(str) + 1))))
		return (0);
	word_count = count_word(str);
	i = 0;
	str += count_separator(str);
	while (*str != '\0')
	{
		tab[i] = malloc(sizeof(**tab) * (count_letter(str) + 1));
		ft_strcpy_to_space(tab[i], str);
		i++;
		str += count_letter(str);
		str += count_separator(str);
	}
	tab[i] = 0;
	return (tab);
}
