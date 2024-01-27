/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1101.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:19:25 by honguyen          #+#    #+#             */
/*   Updated: 2023/05/24 17:40:40 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);
int	*ft_map(int *tab, int length, int (*f) (int));

int	main(void)
{
	int	tab[15];
	int	i;
	int	*result;

	i = 0;
	while (i < 15)
	{
		tab[i] = 1337 * i + 42;
		i++;
	}
	result = ft_map(tab, 15, &ft_find_next_prime);
	i = 0;
	while (i < 15)
	{
		printf("%d", result[i]);
		printf("\n");
		i++;
	}
	return (0);
}
