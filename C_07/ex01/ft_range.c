/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 11:17:22 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/21 14:49:05 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	ptr = malloc(sizeof(*ptr) * (max - min));
	if (ptr == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}

// int	main()
// {
// 	int min = 0;
// 	int max = 5;
// 	int *test = ft_range(min, max);
// 	int size = max - min;
// 	int i = 0;

// 	while (i < size)
// 	{
// 		printf(" %d", *test);
// 		test++;
// 		i++;
// 	}
// }