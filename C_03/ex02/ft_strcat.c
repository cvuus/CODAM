/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 15:13:45 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/14 09:15:47 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

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

// int	main(void)
// {
// 	char dest[40] = "\0 123456789";
// 	char src[] = " You Suck";
// 	ft_strcat(dest, src);
// 	write(1,&dest, 20);
// 	char dest1[40] = "\0 123456789";
// 	char src1[] = " You Suck";
// 	strcat(dest1, src1);
// 	write(1,&dest1, 20);	
// }
