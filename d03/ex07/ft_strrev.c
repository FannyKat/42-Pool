/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 23:13:21 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/03 14:33:17 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		cn;
	int		sizestr;
	char	tmp;

	cn = 0;
	sizestr = 0;
	while (str[sizestr])
		sizestr++;
	sizestr -= 1;
	while (cn < sizestr)
	{
		tmp = str[sizestr];
		str[sizestr] = str[cn];
		str[cn] = tmp;
		cn++;
		sizestr--;
	}
	return (str);
}
