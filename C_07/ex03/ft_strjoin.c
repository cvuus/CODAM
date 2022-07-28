/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 17:18:15 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/21 14:51:43 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		calculate_chars(int size, char **strs, char *sep);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*text;
	int		length;
	int		i;

	length = calculate_chars(size, strs, sep);
	i = 0;
	if (size == 0)
	{
		text = malloc(0);
		return (text);
	}
	text = malloc(sizeof(*text) * (length + 1));
	text[0] = '\0';
	while (i < size)
	{	
		if (i == (size - 1))
		{
			text = ft_strcat(text, strs[i]);
			return (text);
		}
		text = ft_strcat(text, strs[i]);
		text = ft_strcat(text, sep);
		i++;
	}
	return (text);
}

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

int	calculate_chars(int size, char **strs, char *sep)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (i < size)
	{
		if (i == size - 1)
		{
			return (result + ft_strlen(strs[i]));
		}
		result = result + ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	return (result);
}

// int	main(int argc, char **argv)
// {
// 	char sep[] = " & ";
// 	printf("%s\n", ft_strjoin(argc, argv, sep));
// }
