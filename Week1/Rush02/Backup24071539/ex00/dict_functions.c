/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dict_functions.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/24 15:10:19 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/24 15:37:20 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "coollib.h"

t_dict	*g_dict;
int		lines;

char	*lookup(char *text_number)
{
	int	i;

	i = 0;
	while (i < lines)
	{
		if (ft_strcmp(g_dict[i].nbr, text_number) == 0)
			return (g_dict[i].word);
		i++;
	}
	return ("Dict Error\n");
}
