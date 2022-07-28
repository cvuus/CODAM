/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 16:00:39 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/09 10:01:21 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_number(char *tens1, char *ones1)
{
	char	tens2;
	char	ones2;

	tens2 = *tens1;
	ones2 = *ones1 + 1;
	while (tens2 <= '9')
	{
		while (ones2 <= '9')
		{	
			write(1, &*tens1, 1);
			write(1, &*ones1, 1);
			write(1, " ", 1);
			write(1, &tens2, 1);
			write(1, &ones2, 1);
			if (*tens1 == '9' && *ones1 == '8')
			{
				return ;
			}
			write(1, ", ", 2);
			ones2 = ones2 + 1;
		}
		tens2 = tens2 + 1;
		ones2 = '0';
	}
}

void	ft_print_comb2(void)
{
	char	tens1;
	char	ones1;

	tens1 = '0';
	ones1 = '0';
	while (tens1 <= '9')
	{
		while (ones1 <= '9')
		{
			display_number(&tens1, &ones1);
			ones1 = ones1 + 1;
		}
		ones1 = '0';
		tens1 = tens1 + 1;
	}
}
