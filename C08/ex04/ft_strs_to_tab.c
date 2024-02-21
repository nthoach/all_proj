/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:28:09 by honguyen          #+#    #+#             */
/*   Updated: 2023/05/20 10:51:31 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	len_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	copy_str(char *copy, char *avi)
{
	int	j;

	j = 0;
	while (avi[j])
	{
		copy[j] = avi[j];
		j++;
	}
	copy[j] = '\0';
}

void	copy_st_str(int ac, char **av, t_stock_str *st_str)
{
	int	i;
	int	size_str;

	i = 0;
	while (i < ac)
	{
		size_str = len_str(av[i]);
		st_str[i].str = av[i];
		st_str[i].copy = (char *) malloc((size_str + 1) * sizeof(char));
		if (st_str[i].copy != NULL)
		{
			copy_str(st_str[i].copy, av[i]);
			st_str[i].size = size_str;
		}
		i++;
	}
		st_str[ac].size = 0;
		st_str[ac].str = NULL;
		st_str[ac].copy = NULL;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*st_str;

	st_str = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (st_str == NULL)
		return (NULL);
	copy_st_str(ac, av, st_str);
	return (st_str);
}
