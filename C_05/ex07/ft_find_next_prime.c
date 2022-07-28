/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 09:11:51 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/20 18:31:04 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (i <= 2147483647)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	index;

	index = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	while (index < nb)
	{
		if (nb % index == 0)
			return (0);
		if (index < 5)
			index++;
		else
			index = index + 2;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d", ft_find_next_prime(90552));
// }
