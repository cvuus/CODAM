/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 17:15:18 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/19 17:50:10 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	if (argc < 2)
		return (0);
	while (i > 0)
	{
		write(1, &*argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i--;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}
