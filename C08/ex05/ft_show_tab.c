/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:15:07 by honguyen          #+#    #+#             */
/*   Updated: 2023/05/19 14:29:27 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

int	pre_p(int nb)
{
	int	n;

	if (nb < 0)
	{
		write(1, "-", 1);
		n = -nb;
	}
	else
		n = nb;
	return (n);
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
		n = pre_p(nb);
		if (n >= 10)
		{
			ft_putnbr(n / 10);
		}
		write(1, &"0123456789"[n % 10], 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL && par[i].copy != NULL)
	{
		ft_putstr(par[i].str);
		write (1, "\n", 1);
		ft_putnbr(par[i].size);
		write (1, "\n", 1);
		ft_putstr(par[i].copy);
		write (1, "\n", 1);
		i++;
	}
}
