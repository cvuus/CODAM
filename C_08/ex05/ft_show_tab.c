/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_show_tab.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/28 10:29:45 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/28 11:27:14 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	putnbr(int number);
void	putstring(char *string);
int		ft_strlen(char *str);

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		putnbr(par[i].size);
		write(1, "\n", 1);
		putstring(par[i].str);
		write(1, "\n", 1);
		putstring(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

void	putstring(char *string)
{
	write(1, string, ft_strlen(string));
}

void	putnbr(int number)
{
	char	c;

	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (number < 0)
	{
		number = number * (-1);
		write(1, "-", 1);
	}
	if (number > 9)
	{
		putnbr(number / 10);
		putnbr(number % 10);
	}
	if (number < 10)
	{
		c = number + '0';
		write(1, &c, 1);
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

// int	main(void)
// {
// 	return (0);
// }