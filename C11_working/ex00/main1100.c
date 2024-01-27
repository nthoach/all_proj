/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:19:25 by honguyen          #+#    #+#             */
/*   Updated: 2023/05/24 17:19:44 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_foreach(int *tab, int length, void (*f)(int));

int	main(void)
{
	int	tab[15];
	int	i;

	i = 0;
	while (i < 15)
	{
		tab[i] = 1337 * i + 42;
		i++;
	}
	ft_foreach(tab, 15, &ft_putnbr);
	return (0);
}
