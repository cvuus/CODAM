/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dict_to_struct.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 21:51:24 by ovan-rhe      #+#    #+#                 */
/*   Updated: 2022/07/24 15:16:18 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "coollib.h"

// typedef struct s_dict
// {
// 	char	*nbr;
// 	char	*word;
// }	t_dict;

// int		countlines(char *text);
// int		length_of_longest_line(char *text);
// char	**number_list(char *text, int lines, int linelength);
// char	**word_list(char *text, int lines, int linelength);
// t_dict	put_in_dict(char *nbr, char *word, int i, t_dict *d1);

t_dict	*g_dict;

t_dict	*dict_to_struct(char *text)
{
	char	**numbers;
	char	**words;
	int		lines;
	int		linelength;
	int		i;

	lines = countlines(text);
	linelength = length_of_longest_line(text);
	i = 0;
	numbers = number_list(text, lines, linelength);
	words = word_list(text, lines, linelength);
	g_dict = malloc(sizeof(char *) * 2 * lines);
	while (i < lines)
	{
		put_in_dict(numbers[i], words[i], i, g_dict);
		i++;
	}
	return (g_dict);
}
