/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 14:44:34 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/12 12:05:26 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

void	ft_put_digit(int nbr)
{
	char	c;

	c = nbr + '0';
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_put_digit(ft_str_is_printable("a	"));
// }
