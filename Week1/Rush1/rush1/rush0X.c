/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush0X.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 10:17:31 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/09 11:17:54 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    rush(int x, int y)
{
    int	p2;
    int	p1;

    p2 = 1;
    p1 = 1;
    while (p2 <= y)
    {
        while (p1 <= x)
        {
            if (p1 == 1 || p1 == y || p2 == 1 || p2 == y)
            {
                ft_putchar('x');
            }
            else {
                ft_putchar('x');
            }
			 p1 = p1 + 1;
        }
		ft_putchar('\n');
        p1 = 1;
        p2 = p2 + 1;
    }
}