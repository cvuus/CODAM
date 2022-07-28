/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   split_number.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 15:53:43 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/24 13:23:56 by ovan-rhe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "coollib.h"

// char	*read_file(char *str, char *text, int bytes);
// int		return_sizeofbytes(char *str);
// int		countlines(char *text);
// int		length_of_longest_line(char *text);
// char	*split_number(char *text, int line, int linelength);
// char	**number_list(char *text, int lines, int linelength);

char	**number_list(char *text, int lines, int linelength)
{
	char	**numbers;
	int		i;

	i = 0;
	numbers = malloc(sizeof(*numbers) * lines);
	while (i < lines)
	{
		numbers[i] = split_number(text, i, linelength);
		i++;
	}
	return (numbers);
}

char	*split_number(char *text, int line, int linelength)
{
	char	*currentnumber;
	int		j;
	int		i;
	int		count;

	j = 0;
	i = 0;
	count = 0;
	currentnumber = malloc(sizeof(*currentnumber) * linelength);
	while (count < line)
	{
		if (text[j] == '\n')
			count++;
		j++;
	}
	while (text[j] >= '0' && text[j] <= '9')
	{
		currentnumber[i] = text[j];
		i++;
		j++;
	}
	return (currentnumber);
}

int	countlines(char *text)
{
	int	count;

	count = 1;
	while (*text)
	{
		if (*text == '\n')
		{
			count++;
		}
		text++;
	}
	return (count);
}

int	length_of_longest_line(char *text)
{
	int	i;
	int	currentlength;

	currentlength = 0;
	i = 0;
	while (*text)
	{
		if (*text == '\n')
			i = 0;
		if (i > currentlength)
			currentlength = i;
		i ++;
		text++;
	}
	return (currentlength);
}
