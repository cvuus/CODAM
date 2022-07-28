/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/13 13:02:22 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/14 09:08:45 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str);

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
// 	char ptr1[] = "heyz";
// 	char ptr2[] = "heyz";
// 	//printf("Size of 1: %d, Size of 2: %d", ft_strlen("ABz"), ft_strlen("AB"));
// 	printf("Correct: %d", strncmp(ptr1, ptr2, 4));
// 	printf(" Mine: %d", ft_strncmp(ptr1, ptr2, 4));
// } 