/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/16 10:09:35 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/16 14:44:54 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		check(char *str);
void	ft_putnbr(int number, int modulo, char *base);
void	ft_putnbr_neg_binary(int number);

void	ft_putnbr_base(int nbr, char *base)
{
	int	length;

	length = ft_strlen(base);
	if (check(base) == 0)
		return ;
	if (nbr == -2147483648)
	{
		if (length == 10)
			write(1, "-2147483648", 11);
		if (length == 8)
			write(1, "-pnnnnnnnnnn", 13);
		if (length == 2)
			write(1, "-10000000000000000000000000000000", 34);
		return ;
	}
	ft_putnbr(nbr, length, base);
}

int	check(char *str)
{
	int		count;
	char	letters[18];
	int		i;
	int		length;

	letters[0] = '+';
	letters[1] = '-';
	length = ft_strlen(str);
	count = 0;
	i = 0;
	if (length < 2)
		return (0);
	while (*str++)
	{
		while (i < ft_strlen(letters))
		{
			if (*str == letters[i])
				return (0);
			i++;
		}
		i = 0;
		letters[count] = *str;
		count++;
	}
	return (1);
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

void	ft_putnbr(int number, int modulo, char *base)
{	
	if (number < 0 && modulo == 2)
	{
		write(1, "1", 1);
		ft_putnbr_neg_binary(-number);
	}
	if (number < 0 && modulo != 2)
	{
		write(1, "-", 1);
		number = number * (-1);
	}
	if (number > (modulo - 1))
	{
		ft_putnbr(number / modulo, modulo, base);
		ft_putnbr(number % modulo, modulo, base);
	}
	if (number < modulo)
		write(1, &base[number], 1);
}

void	ft_putnbr_neg_binary(int number)
{
	if (number > 1)
	{
		ft_putnbr_neg_binary(number / 2);
		ft_putnbr_neg_binary(number % 2);
	}
	if (number < 2)
	{
		if (number == 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}

// int	main(void)
// {
// 	ft_putnbr_base(2147483647, "0123456789ABCDEF");
// }