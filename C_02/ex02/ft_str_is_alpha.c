/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/10 11:34:48 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/12 11:54:11 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	length;

	length = ft_strlen(str);
	if (length == 0 || str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 122 && str[i] >= 97) || (str[i] <= 90 && str[i] >= 65))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putdigit(int nbr)
{
	char	c;

	c = nbr + '0';
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_putdigit(ft_str_is_alpha("has!hash"));
// }