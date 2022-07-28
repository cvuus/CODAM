/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   split_word.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 19:09:27 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/23 19:40:57 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*split_word(char *text, int line, int linelength)
{
	char	*currentword;
	int		j;
	int		i;
	int		count;

	j = 0;
	i = 0;
	count = 0;
	currentword = malloc(sizeof(*currentword) * linelength);
	while (count < line)
	{
		if (text[j] == '\n')
			count++;
		j++;
	}
	while (text[j] != '\n' && text[j])
	{
		while (text[j] >= 'a' && text[j] <= 'z')
		{
			currentword[i] = text[j];
			i++;
			j++;
		}
		if (text[j] == '\n')
			return (currentword);
		j++;
	}
	return (currentword);
}

char	**word_list(char *text, int lines, int linelength)
{
	char	**words;
	int		i;

	i = 0;
	words = malloc(sizeof(*words) * lines);
	while (i < lines)
	{
		words[i] = split_word(text, i, linelength);
		i++;
	}
	return (words);
}
