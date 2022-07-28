/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 15:29:28 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/09 18:09:18 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{	
	int	i;
	int	j;
	int	*ptr1;
	int	*ptr2;

	if (size < 2)
		return ;
	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		ptr1 = &tab[i];
		ptr2 = &tab[j - i];
		ft_swap(ptr1, ptr2);
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
