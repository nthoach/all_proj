/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:42:03 by honguyen          #+#    #+#             */
/*   Updated: 2023/05/24 19:48:47 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f) (char *))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
