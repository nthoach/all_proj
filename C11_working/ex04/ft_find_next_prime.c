/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:51:38 by honguyen          #+#    #+#             */
/*   Updated: 2023/05/15 10:11:37 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	upp;
	int	low;

	if (nb <= 0)
		return (0);
	else
	{
		upp = nb;
		low = 1;
		while (upp > low + 1)
		{
			upp = (upp + nb / upp) / 2;
			low = nb / upp;
		}
		if (low * low == nb)
			return (low);
		else if (upp * upp == nb)
			return (upp);
		else
			return (upp);
	}
}

int	ft_is_prime(int nb)
{
	int	i1;
	int	i2;
	int	stop;

	stop = ft_sqrt(nb);
	if (nb <= 1)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	else
	{
		i1 = 5;
		i2 = 7;
		while (i1 <= stop)
		{
			if (nb % i1 == 0 || nb % i2 == 0)
				return (0);
			i1 += 6;
			i2 += 6;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (i >= nb)
	{
		if (ft_is_prime(i))
		{
			return (i);
		}
		i++;
	}
	return (i);
}
