/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 17:32:52 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/19 17:55:49 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char **a, int i);
void	bubble_sort(int argc, char **argv);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 2)
		return (0);
	bubble_sort(argc, argv);
	while (argv[i])
	{
		write(1, &*argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}

void	bubble_sort(int argc, char **argv)
{
	int	j;
	int	i;

	i = 0;
	while (i < argc - 2)
	{
		j = 1;
		while (j < argc - i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(argv, j);
			}
			j++;
		}
		i++;
	}
}

void	ft_swap(char **a, int i)
{
	char	*tmp;

	tmp = a[i + 1];
	a[i + 1] = a[i];
	a[i] = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
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
