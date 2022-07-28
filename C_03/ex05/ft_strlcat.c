/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 18:10:15 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/14 09:35:11 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, unsigned int nb);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	letters_to_append;
	unsigned int	dest_length;
	unsigned int	size_of_dest;

	size_of_dest = sizeof(dest);
	dest_length = ft_strlen(dest);
	letters_to_append = size - dest_length - 1;
	ft_strncat(dest, src, letters_to_append);
	dest[size_of_dest] = '\0';
	dest_length = ft_strlen(dest);
	return (dest_length);
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	length;

	length = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb)
	{		
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char dest[20] = "12";
// 	char src[] = "3456789abcdefg";
// 	ft_strlcat(dest, src, sizeof(dest));
// 	write(1, &*dest, 10);
// 	char dest1[20] = "12";
// 	char src1[] = "3456789abcdefg";
// 	strlcat(dest1, src1, sizeof(dest1));
// 	write(1, &*dest1, 10);
// }