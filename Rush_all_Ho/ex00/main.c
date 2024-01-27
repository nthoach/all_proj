/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honguyen <honguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 08:48:28 by honguyen          #+#    #+#             */
/*   Updated: 2023/05/11 17:26:09 by honguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int	x;
	int	y;
	int	i;

	x = 0;
	y = 0;
	i = 0;

   while (argv[1][i] != '\0')
	{
      if (argv[1][i] == '-')
			i++;
		if (argv[1][i] >= '0' && argv[1][i] <= '9')
		{
         x = x * 10 + (argv[1][i] - '0');
      }
		i++;
	}
	i = 0;
   while (argv[2][i] != '\0')
	{
      if (argv[2][i] == '-')
			i++;
      if (argv[2][i] >= '0' && argv[2][i] <= '9')
		{
         y = y * 10 + (argv[2][i] - '0');
      }
		i++;
	}
	rush(x, y);
}
