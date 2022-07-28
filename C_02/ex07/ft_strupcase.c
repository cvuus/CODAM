/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 14:51:06 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/12 12:13:47 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			c = str[i];
			str[i] = c - 32;
		}
		else
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
// 	char a[6] = "a55z!";
// 	char *ptr;

// 	ptr = a;
// 	ft_putchar(ft_strupcase(ptr));
// }
