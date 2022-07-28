/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 11:28:53 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/13 10:44:53 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
void	ft_putchar(char *text);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	length_src;
	unsigned int	i;

	length_src = ft_strlen(src);
	i = 0;
	while (i < n)
	{
		if (i < length_src)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
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

void	ft_putchar(char *text)
{
	int		i;
	char	c;

	i = 0;
	while (text[i] != '\0')
	{
		c = text[i];
		write(1, &c, 1);
		i ++;
	}
}

// int	main(void)
// {
// 	// char dest[5];
// 	// char src[10] = "123456789";

// 	// ft_strncpy(dest,src, 2);
// 	// //strncpy(dest, src, 2);
// 	// //char *ptr = strncpy(&dest, src, 22);
// 	// for(int i = 0; i < sizeof(dest); i++)
// 	// {
// 	// 	if(dest[i] == '\0')
// 	// 	{
// 	// 		write(1, "0", 1);
// 	// 	}
// 	// 	else
// 	// 	{
// 	// 		write(1, &dest[i], 1);
// 	// 	}
// 	// }
// }