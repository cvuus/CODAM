/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 10:10:29 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/21 14:48:16 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(sizeof(*ptr) * (ft_strlen(src) + 1));
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char *ptr = ft_strdup("");
// 	write(1, &*ptr, ft_strlen(ptr));
// }