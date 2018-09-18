/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 17:31:45 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/16 14:45:11 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int cn;

	i = 0;
	cn = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' &&
			str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (cn == 0 && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (cn != 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			cn = 1;
		}
		else
			cn = 0;
		i++;
	}
	return (str);
}
