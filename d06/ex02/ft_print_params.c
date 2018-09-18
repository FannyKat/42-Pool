/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:43:18 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/15 19:16:36 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int y;
	int x;

	x = 1;
	y = 0;
	if (argc > 1)
	{
		while (argv[x])
		{
			y = 0;
			while (argv[x][y])
			{
				ft_putchar(argv[x][y]);
				y++;
			}
			ft_putchar('\n');
			x++;
		}
	}
	return (0);
}
