/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:06:45 by honguyen          #+#    #+#             */
/*   Updated: 2023/05/07 12:51:58 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l_x;
	int	l_y;

	l_y = 1;
	while (l_y <= y)
	{
		l_x = 1;
		while (l_x <= x)
		{
			if ((l_x != 1 && l_x != x) && (l_y != 1 && l_y != y))
				ft_putchar(' ');
			else if ((l_y == 1 || l_y == y) && (l_x == 1 || l_x == x))
				ft_putchar('o');
			else if ((l_y == 1 || l_y == y) && (l_x != 1 && l_x != x))
				ft_putchar('-');
			else
				ft_putchar('|');
			l_x++;
		}
		ft_putchar('\n');
		l_y++;
	}
}
