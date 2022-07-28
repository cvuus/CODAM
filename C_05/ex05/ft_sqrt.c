/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/16 16:57:18 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/20 18:36:44 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);
int	binarysearch(long int left, long int right, long int mid, int nb);

int	ft_sqrt(int nb)
{
	if (nb > 10000)
		return (binarysearch(1, (nb / 100) * 1, 1, nb));
	if (nb > 100)
		return (binarysearch(1, (nb / 10) * 2, 1, nb));
	else
		return (binarysearch(1, (nb / 2), 1, nb));
}

int	binarysearch(long int left, long int right, long int mid, int nb)
{
	long int	square;

	while (left <= right)
	{
		mid = (left + right) / 2;
		square = mid * mid;
		if (square == nb)
			return (mid);
		if (square < nb)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (0);
}

// int	main(void)
// {
// 	// while (i < 10000000)
// 	// {
// 		printf("%d\n", ft_sqrt(100000000));
// 	// 	i++;
// 	// }
// }
