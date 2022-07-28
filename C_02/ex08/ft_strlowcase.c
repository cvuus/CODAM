/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 16:40:05 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/13 10:42:26 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			c = str[i];
			str[i] = c + 32;
		}
		i++;
	}
	*(str + i) = '\0';
	return (str);
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
// 	char a[40] = "LQ8WY%SOC$X59X',}2?E9iCX.";
// 	char *ptr;

// 	ptr = a;
// 	ft_putchar(ft_strlowcase(ptr));
// }