/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 17:12:01 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/14 09:23:02 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	int				i;
	unsigned int	length1;
	unsigned int	length2;

	length1 = ft_strlen(str);
	length2 = ft_strlen(to_find);
	i = 0;
	if (length2 == 0)
	{
		return (str);
	}
	while (*str)
	{
		if (*str == *to_find)
		{
			if (ft_strncmp(str, to_find, length2) == 0)
			{
				return (str);
			}
		}
		str++;
		i++;
	}
	return (NULL);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				length1;
	int				length2;

	length1 = ft_strlen(s1);
	length2 = ft_strlen(s2);
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n || length1 == length2)
	{
		return (0);
	}
	else if (length1 > length2)
	{
		return (s1[i]);
	}
	else
	{
		return (-(s2[i]));
	}
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
// 	char *needle = "in";
// 	char *haystack = "nowordinhere";
// 	char *ptr2;
// 	char *ptr3;

// 	ptr2 = ft_strstr(haystack, needle);
// 	ptr3 = strstr(haystack, needle);
// 	write(1, &*ptr2, 10);
// 	write(1, &*ptr3, 10);

// }
