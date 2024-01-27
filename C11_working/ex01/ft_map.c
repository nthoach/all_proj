/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:26:44 by honguyen          #+#    #+#             */
/*   Updated: 2023/05/24 17:32:57 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f) (int))
{
	int	i;
	int	*ptr;

	ptr = (int *) malloc (length * sizeof(int));
	i = 0;
	while (i < length)
	{
		ptr[i] = (*f)(tab[i]);
		i++;
	}
	return (ptr);
}
