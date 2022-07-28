/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   string_functions.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/24 11:59:15 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/24 12:39:05 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	length;

	length = ft_strlen(dest);
	i = 0;
	while (src[i])
	{		
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
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

char	*copy_str_range(char *src, int i, int j)
{
	char	*str;
	int		index;

	str = malloc(sizeof(*str) * (j + 1));
	index = 0;
	while (src[i] != '\0' && i <= j)
	{
		str[index] = src[i];
		i++;
		index++;
	}
	str[index] = '\0';
	return (str);
}
