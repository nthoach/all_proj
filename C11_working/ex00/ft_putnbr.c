/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 08:45:24 by honguyen          #+#    #+#             */
/*   Updated: 2023/05/24 17:23:37 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	put_nbr(int n)
{
	if (n > 9)
	{
		put_nbr(n / 10);
	}
	write(1, &"0123456789"[n % 10], 1);
}

void	ft_putnbr(int nb)
{
	int	n;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			n = -nb;
		}
		else
			n = nb;
		put_nbr(n);
		write(1, "\n", 1);
	}
}
