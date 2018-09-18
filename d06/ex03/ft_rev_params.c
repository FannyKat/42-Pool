/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatusse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 13:06:28 by fcatusse          #+#    #+#             */
/*   Updated: 2018/09/15 19:15:59 by fcatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int y;
	int x;

	x = argc - 1;
	y = 0;
	while (argv[x] && x > 0)
	{
		y = 0;
		while (argv[x][y])
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		ft_putchar('\n');
		x--;
	}
	return (0);
}
