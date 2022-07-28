/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/12 15:39:07 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/14 09:04:58 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	ft_strcmp(char *s1, char *s2)
{	
	int	i;
	int	length1;
	int	length2;

	length1 = ft_strlen(s1);
	length2 = ft_strlen(s2);
	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (length1 == length2)
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
// 	char ptr1[] = "";
// 	char ptr2[] = "";

// 	// char *ptr1;
// 	// char *ptr2;

// 	// ptr1 = "text";
// 	// ptr2 = "hello";
// 	//printf("Size of 1: %d, Size of 2: %d", ft_strlen("ABz"), ft_strlen("AB"));
// 	//nt number = strcmp(ptr1, ptr2);
// 	//printf("%d", number);
// 	printf("Correct: %d", (strcmp(ptr1, ptr2)));
// 	printf(" Mine: %d", ft_strcmp(ptr1, ptr2));
// }

// A is smaller than a
// A is smaller than B
// Z is smaller than a
// Letter is larger than Null
