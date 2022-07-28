/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 10:06:45 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/07 15:43:27 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n < 0)
	{
		write(1, &negative, 1);
		write(1, "\n", 1);
	}
	else
	{
		write(1, &positive, 1);
		write(1, "\n", 1);
	}
}

int	main(void)
{
	ft_is_negative(2);
}
