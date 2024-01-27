/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1102.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:19:25 by honguyen          #+#    #+#             */
/*   Updated: 2023/05/24 19:34:57 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	ft_str_is_alpha(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			str++;
		else
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb);
int	ft_any(char **tab, int (*f) (char *));

int	main(void)
{
	char	*tab[] = {"Hello.", "Everyone .", "This.", "is.", "a.", "test.","\0"} ;

	printf("%d", ft_any(tab, &ft_str_is_alpha));
	return (0);
}
