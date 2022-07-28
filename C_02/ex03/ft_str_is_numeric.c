/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/10 12:44:58 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/12 11:59:54 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(str);
	if (length < 1)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] <= 57 && str[i] >= 48)
		i++;
		else
		{
			return (0);
		}
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

// int	main(void)
// {
// 	int i = ft_str_is_numeric("46464645464");
// 	printf("%d", i);
// }