/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 07:48:46 by pauljull          #+#    #+#             */
/*   Updated: 2018/09/16 12:18:19 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		word_count(char *str)
{
	int word;
	int i;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (str[i] == '\n' && str[i] != '\0')
			i += 1;
		if (str[i] != '\n' && str[i] != '\0')
		{
			word += 1;
			while (str[i] != '\n' && str[i] != '\0')
				i += 1;
		}
		while (str[i] == '\n' && str[i] != '\0')
			i += 1;
	}
	return (word);
}

void	letter_count(char **split, char *str)
{
	int letter;
	int word;
	int i;

	i = 0;
	letter = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (str[i] == '\n' && str[i] != '\0')
			i += 1;
		while (str[i] != '\n' && str[i] != '\0')
		{
			letter += 1;
			i += 1;
		}
		split[word] = (char*)malloc(sizeof(char) * (letter + 1));
		while (str[i] == '\n' && str[i] != '\0')
			i += 1;
		letter = 0;
		word += 1;
	}
}

void	filling(char **split, char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (split[i] != 0)
	{
		while (str[k] == '\n' && str[k] != '\0')
			k += 1;
		while (str[k] != '\n' && str[k] != '\0')
		{
			split[i][j] = str[k];
			j += 1;
			k += 1;
		}
		split[i][j] = '\0';
		i += 1;
		j = 0;
	}
	split[i] = 0;
}

char	**ft_split_space(char *str)
{
	char	**split;
	int		word;

	if (!str)
		return (0);
	word = word_count(str);
	if (!(split = (char**)malloc(sizeof(char*) * (word + 1))))
		return (0);
	split[word] = 0;
	if (word == 0)
	{
		split[0] = 0;
		return (split);
	}
	letter_count(split, str);
	filling(split, str);
	return (split);
}
