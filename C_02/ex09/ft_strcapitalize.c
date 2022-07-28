/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/11 17:01:29 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/13 10:45:46 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);
int		check(char str);
char	ft_strupcase(char str);
char	ft_strlowcase(char str);
int		ft_strlen(char *str);
void	ft_putchar(char *text);

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		size;

	size = ft_strlen(str);
	i = 0;
	while (i < size)
	{
		if (i == 0 && (check(str[i]) == 1))
		{
			str[i] = ft_strupcase(str[i]);
		}
		else if (i < size -1 && check(str[i]) == 0 && check(str[i + 1]) == 1)
		{
			str[i + 1] = ft_strupcase(str[i + 1]);
			i++;
		}
		else if (check(str[i]) == 2 && i != 0 && check(str[i - 1]) != 0)
		{
			str[i] = ft_strlowcase(str[i]);
		}
		i++;
	}
	return (str);
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

char	ft_strupcase(char str)
{
	char	c;

	c = str - 32;
	return (c);
}

int	check(char str)
{
	if (str >= 65 && str <= 90)
		return (2);
	else if (str >= 97 && str <= 122)
		return (1);
	else if (str >= 48 && str <= 57)
		return (3);
	else
		return (0);
}

char	ft_strlowcase(char str)
{
	char	c;

	c = str + 32;
	return (c);
}

// void	ft_putchar(char *text)
// {
// 	int		i;
// 	char	c;

// 	i = 0;
// 	while (text[i] != '\0')
// 	{
// 		c = text[i];
// 		write(1, &c, 1);
// 		i ++;
// 	}
// }

// int	main(void)
// {
// 	char text[] = "nH@y>tCM";
// 	ft_putchar(ft_strcapitalize(text));
// }
// 1 Lowercase
// 2 UpperCase
// 3	Number 
// 0 Anything else
