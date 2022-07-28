/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   split_word.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 19:09:27 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/24 12:05:17 by ovan-rhe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	startpoint(int line, char *text);

char	*split_word(char *text, int line, int linelength)
{
	char	*currentword;
	int		j;
	int		i;

	i = 0;
	currentword = malloc(sizeof(*currentword) * linelength);
	j = startpoint(line, text);
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

int	startpoint(int line, char *text)
{
	int	count;
	int	j;

	count = 0;
	j = 0;
	while (count < line)
	{
		if (text[j] == '\n')
			count++;
		j++;
	}
	return (j);
}
