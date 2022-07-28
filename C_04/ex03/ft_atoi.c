/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/14 13:42:07 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/16 14:43:24 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		convert(char *str);
int		calculate(char *str);
int		findnumber(char *str);
int		ft_strlen(char *str);

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

int	findnumber(char *str)
{
	int		i;
	int		j;
	int		result;

	result = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] >= '0' && str[i] <= '9')
			{
				if (str[i + 1] < '0' || str[i + 1] > '9')
					return (result + (str[i] - '0'));
				else
					result = (result + (str[i] - '0')) * 10;
			i++;
			}
			return (result);
		}
		i++;
	}
	return (0);
}

int	findsigns(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 45)
		{
				count++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			return (count % 2);
		}
		i++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int		number;

	number = findnumber(str);
	if (findsigns(str) == 0)
		return (number);
	else
		return (-number);
}

// int	main(void)
// {
// 	char number[] = "		\n \thshd--++sds5565+hhhhh";
// 	int i = ft_atoi(number);
// 	printf("%d", i);
// }