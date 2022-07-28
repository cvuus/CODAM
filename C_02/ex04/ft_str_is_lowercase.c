/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 12:19:25 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/12 12:01:56 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 97 || *str > 122)
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
// 	ft_put_digit(ft_str_is_lowercase(""));
// }
