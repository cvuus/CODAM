/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strs_to_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 13:29:45 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/28 11:24:38 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char				*ft_strdup(char *src);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				putnbr(int number);
void				putstring(char *string);
int					ft_strlen(char *str);

// void	ft_show_tab(struct s_stock_str *par)
// {
// 	int	i;
// 	i = 0;
// 	while (par[i].str != 0)
// 	{
// 		putnbr(par[i].size);
// 		write(1, "\n", 1);
// 		putstring(par[i].str);
// 		write(1, "\n", 1);
// 		putstring(par[i].copy);
// 		write(1, "\n", 1);
// 		i++;
// 	}
// }

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ptr_to_struct;

	i = 0;
	ptr_to_struct = malloc(sizeof(t_stock_str) * (ac + 1));
	if (ptr_to_struct == 0)
		return (0);
	while (i < ac)
	{
		ptr_to_struct[i].size = ft_strlen(av[i]);
		ptr_to_struct[i].copy = ft_strdup(av[i]);
		ptr_to_struct[i].str = ft_strdup(av[i]);
		i++;
	}
	ptr_to_struct[i].size = 0;
	ptr_to_struct[i].copy = 0;
	ptr_to_struct[i].str = 0;
	return (ptr_to_struct);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(sizeof(*ptr) * (ft_strlen(src) + 1));
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
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

// int main(void)
// {
// 	int 				ac = 3;
// 	char 				**av;
// 	struct s_stock_str			*pointer;
// 	av[0] = "a";
// 	av[1] = "wasgeht";
// 	av[2] = "noway";
// 	pointer = ft_strs_to_tab(ac, av);
// 	//ft_show_tab(pointer);
// 	return (0);
// }

// void	putstring(char *string)
// {
// 	write(1, string, ft_strlen(string));
// }

// void	putnbr(int number)
// {
// 	char	c;
// 	if (number == -2147483648)
// 	{
// 		write(1, "-2147483648", 11);
// 	}
// 	if (number < 0)
// 	{
// 		number = number * (-1);
// 		write(1, "-", 1);
// 	}
// 	if (number > 9)
// 	{
// 		putnbr(number / 10);
// 		putnbr(number % 10);
// 	}
// 	if (number < 10)
// 	{
// 		c = number + '0';
// 		write(1, &c, 1);
// 	}
// }
