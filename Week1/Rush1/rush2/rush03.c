/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush03.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 11:28:59 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/09 12:16:38 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	printsquare(int x, int y, int p1, int p2);

void	rush(int x, int y)
{
	int	p1;
	int	p2;

	p1 = 1;
	p2 = 1;
	if (x < 1 || y < 1)
		write(1, "ERROR: Please enter a number > 0", 33);
	else
		printsquare(x, y, p1, p2);
}

void	printsquare(int x, int y, int p1, int p2)
{
	while (p2 <= y)
	{
		while (p1 <= x)
		{
			if (p1 == 1 || p2 == 1 || p2 == y || p1 == x)
			{
				if ((p1 == 1 && p2 == 1) || (p1 == 1 && p2 == y))
					ft_putchar('A');
				else if ((p1 == x && p2 == 1) || (p1 == x && p2 == y))
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else
				ft_putchar(' ');
			p1++;
		}
		ft_putchar('\n');
		p2++;
		p1 = 1;
	}
}
