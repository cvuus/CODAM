/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 12:24:11 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/21 14:50:29 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;
	int	bound;

	bound = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	ptr = malloc(sizeof(*ptr) * (bound));
	if (ptr == 0)
	{
		return (-1);
	}
	while (i < (bound))
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (bound);
}

// int	main(void)
// {
// 	int	*test;
// 	int min = 0;
// 	int max = 10;
// 	// int	i = 0;
// 	int result;
// 	result = ft_ultimate_range(&test, min, max);
// 	// printf("%d\n", result);
// 	// while (i < (max - min))
// 	// {
// 	// 	printf("%d,", *test);
// 	// 	test++;
// 	// 	i++;
// 	// }
// }
