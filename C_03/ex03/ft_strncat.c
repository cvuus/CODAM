/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 17:05:24 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/14 09:17:45 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str);

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
// 	char dest[40] = "123456789";
// 	char src[] = " You Suck";
// 	ft_strncat(dest, src, 5);
// 	write(1,&dest, 20);
// 	char dest1[40] = "  123456789";
// 	char src1[] = " You Suck";
// 	strncat(dest1, src1, 5);
// 	write(1,&dest1, 20);	
// }
