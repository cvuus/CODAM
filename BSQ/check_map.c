/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_map.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 12:30:19 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/27 18:11:58 by ovan-rhe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "coollib.h"

int	check_first_line(char *text);
int	check_text_to_first_line(char *text);
int	ft_strlen(char *str);

int	check(char *text)
{
	if (get_rows(text) == -1)
		return (-1);
	if (get_rows(text) < 1 && get_cols (text) < 1)
		return (-1);
	if (check_first_line(text) == -1)
		return (-1);
	return (1);
}

int	check_first_line(char *text)
{
	char	*char_array;
	int		i;

	char_array = create_chars(text);
	if (char_array[0] == char_array[1])
		return (-1);
	if (char_array[0] == char_array[2])
		return (-1);
	if (char_array[2] == char_array[1])
		return (-1);
	i = 0;
	while (i < 3)
	{
		if (char_array[i] < 32 || char_array[i] > 126)
			return (-1);
		i++;
	}
	return (1);
}

int	check_text_to_first_line(char *text)
{
	int		startpoint;
	char	*char_array;

	char_array = create_chars(text);
	startpoint = get_startpoint(text);
	if (ft_strlen(text) - startpoint == 2)
		return (1);
	while (text[startpoint])
	{
		if (text[startpoint] == char_array[0] || \
			text[startpoint] == char_array[1] || \
			text[startpoint] == char_array[2] || \
			text[startpoint] == '\n')
		{
			startpoint++;
		}
		else
			return (-1);
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}
