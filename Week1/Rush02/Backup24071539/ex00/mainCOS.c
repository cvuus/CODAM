/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mainCOS.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 20:38:15 by ovan-rhe      #+#    #+#                 */
/*   Updated: 2022/07/24 15:36:39 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "coollib.h"

char	*lookup(char *text_number);

// typedef struct s_dict
// {
// 	char	*nbr;
// 	char	*word;
// }	t_dict;

// char	*read_file(char *str, char *text, int bytes);
// int		return_sizeofbytes(char *str);
// int		countlines(char *text);
// int		length_of_longest_line(char *text);
// char	*split_number(char *text, int line, int linelength);
// char	**number_list(char *text, int lines, int linelength);
// char	*split_word(char *text, int line, int linelength);
// char	**word_list(char *text, int lines, int linelength);
// char	*ft_strcpy(char *dest, char *src);
// int		ft_strlen(char *str);
// t_dict	put_in_dict(char *nbr, char *word, int i, t_dict *d1);
// t_dict	*dict_to_struct(char *text);
// int		ft_strcmp(char *s1, char *s2);
// int		check_if_number(char *nbr);

t_dict	*g_dict;
int		lines;

int	main(int argc, char **argv)
{
	int		bytes;
	char	*text;
	char	*nbr;
	char	*dict;

	if (argc != 3 && argc != 2)
	{
		write(1, "Input error\n", 12);
		return (0);
	}
	if (argc == 3)
		dict = argv[1];
	else
		dict = "numbers.dict";
	nbr = argv[argc - 1];
	if (!check_if_number(nbr))
		return (0);
	bytes = return_sizeofbytes(dict);
	text = malloc(sizeof(*text) * bytes);
	text = read_file(dict, text, bytes);
	lines = countlines(text);
	dict_to_struct(text);
	free(text);
	// int i = 0;
	// while (i < lines)
	// {
	// 	printf("%s: %s\n", g_dict[i].nbr, g_dict[i].word);
	// 	i++;
	// }

	//free g_dict, d1 and everything in split words and numbers at the end
	printf("%s\n", lookup("21"));


}

int	check_if_number(char *nbr)
{
	int	i;

	i = 0;
	while (nbr[i])
	{
		if (nbr[i] < '0' || nbr[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
