/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/16 15:14:37 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/18 15:36:05 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i++ <= power)
	{
		result = result * nb;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(412, -2087));
// }
