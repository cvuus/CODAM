/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/16 17:07:03 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/20 18:28:25 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
		index++;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_is_prime(106037));
}
