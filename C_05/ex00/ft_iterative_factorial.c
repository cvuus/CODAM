/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/16 14:54:24 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/18 15:03:29 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(-2));
// }