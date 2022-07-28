/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_processing.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ovan-rhe <ovan-rhe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 16:45:05 by ovan-rhe      #+#    #+#                 */
/*   Updated: 2022/07/27 18:03:04 by ovan-rhe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "coollib.h"

//Get Rows and Get Cols Return -1  if their sizes are not equal

int	get_rows(char *str)
{
	int	count;
	int	length_first_line;
	int	current_length;

	count = 0;
	while (*str)
	{
		if (*str == '\n' && count == 1)
		{
			count++;
			length_first_line = current_length;
			current_length = 0;
		}
		else if (*str == '\n')
		{
			count++;
			if (count > 1 && current_length != length_first_line)
				return (-1);
			current_length = 0;
		}
		str++;
		current_length++;
	}
	return (count - 1);
}

int	get_cols(char *str)
{
	int	current_length;
	int	count;

	count = 0;
	if (get_rows(str) != -1)
	{
		while (*str)
		{
			if (*str == '\n' && count < 2)
			{
				count++;
				current_length = 0;
			}
			else if (*str == '\n')
			{
				return (current_length - 1);
			}
			current_length++;
			str++;
		}
		return (current_length - 1);
	}
	return (-1);
}

int	**input_to_matrix(char *input, int **matrix, int sp)
{
	int		row;
	int		col;
	char	*char_array;

	row = 0;
	col = 0;
	char_array = create_chars(input);
	while (input[sp] == char_array[0] || input[sp] == char_array[1]
		|| input[sp] == '\n')
	{
		if (input[sp] == char_array[1])
			matrix[row][col] = 0;
		else if (input[sp] == char_array[0])
			matrix[row][col] = 1;
		else if (input[sp] == '\n')
		{
			col = -1;
			row++;
		}
		col++;
		sp++;
	}
	return (matrix);
}

// array[0] = "empty" character
// array[1] = "obstacle" character
// array[2] = "full" character

char	*create_chars(char *input)
{
	int		i;
	char	*chars_array;

	chars_array = malloc(sizeof(*chars_array) * 4);
	if (chars_array == 0)
	{
		write(2, "malloc error\n", 13);
		return (0);
	}
	i = 0;
	while (input[i] != '\n')
		i++;
	chars_array[0] = input[i - 3];
	chars_array[1] = input[i - 2];
	chars_array[2] = input[i - 1];
	chars_array[3] = '\0';
	return (chars_array);
}

int	get_startpoint(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\n')
	{
		i++;
	}
	return (i + 1);
}
