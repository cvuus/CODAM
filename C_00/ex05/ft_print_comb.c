/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 10:17:12 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/09 10:02:33 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_equality(char *hundreds, char *tens, char *ones)
{	
	if (*hundreds == *ones)
	{
		*ones = *ones + 1;
	}
	if (*hundreds == *tens)
	{
		*tens = *tens + 1;
	}
	if (*tens == *ones)
	{
		*ones = *ones + 1;
	}
}

void	output_to_std(char hundreds, char tens, char ones)
{
	write(1, &hundreds, 1);
	write(1, &tens, 1);
	write(1, &ones, 1);
	if (hundreds <= '6')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	hundreds;
	char	tens;
	char	ones;

	hundreds = '0';
	tens = '0';
	ones = '0';
	while (hundreds < '8')
	{
		check_equality(&hundreds, &tens, &ones);
		output_to_std(hundreds, tens, ones);
		ones = ones + 1;
		if (ones > '9' )
		{
			tens = tens + 1;
			ones = tens + 1;
		}
		if (tens > '8')
		{
			hundreds = hundreds + 1;
			tens = hundreds + 1;
			ones = tens + 1;
		}
	}
}
