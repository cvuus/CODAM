/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   put_in_dict.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 14:27:23 by ovan-rhe      #+#    #+#                 */
/*   Updated: 2022/07/24 15:09:56 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "coollib.h"

// char	*ft_strcpy(char *dest, char *src);
// int		ft_strlen(char *str);

// typedef struct s_dict
// {
// 	char	*nbr;
// 	char	*word;
// }	t_dict;

t_dict	put_in_dict(char *nbr, char *word, int i, t_dict *d1)
{
	d1[i].nbr = malloc(sizeof(char) * ft_strlen(nbr) + 1);
	d1[i].word = malloc(sizeof(char) * ft_strlen(word) + 1);
	ft_strcpy(d1[i].nbr, nbr);
	ft_strcpy(d1[i].word, word);
	return (d1[i]);
}
