/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_output.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ovan-rhe <ovan-rhe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 17:03:31 by ovan-rhe      #+#    #+#                 */
/*   Updated: 2022/07/27 11:50:50 by ovan-rhe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "coollib.h"

//ResultArray[0] = Current Size of Biggest Square
//ResultArray[1] = Row Position of Bottom Right Corner of Square
//ResultArray[2] = Col Position of Bottom Right Corner of Square

// chars array[0] = "empty" character
// chars array[1] = "obstacle" character
// chars array[2] = "full" character

char	**output_creator_2000(int *array, char **output_matrix, char *text)
{
	int		size;
	int		i;
	int		j;
	char	*char_array;

	size = array[0];
	i = array[1];
	j = array[2];
	char_array = create_chars(text);
	while (i > array[1] - size)
	{
		while (j > array[2] - size)
		{
			output_matrix[i][j] = char_array[2];
			j--;
		}
		j = array[2];
		i--;
	}
	return (output_matrix);
}

char	**back_to_char_matrix(int **int_matrix, int row_count,
			int col_count, char *text)
{
	int		i;
	int		j;
	char	**output_matrix;
	char	*char_array;

	output_matrix = create_output_matrix(row_count, col_count);
	i = 0;
	j = 0;
	char_array = create_chars(text);
	while (i < row_count)
	{
		while (j < col_count)
		{
			if (int_matrix[i][j] == 0)
				output_matrix[i][j] = char_array[1];
			else if (int_matrix[i][j] > 0)
				output_matrix[i][j] = char_array[0];
			j++;
		}
		j = 0;
		i++;
	}
	return (output_matrix);
}

char	**create_output_matrix(int row_count, int col_count)
{
	char	**output_matrix;
	int		i;

	i = 0;
	output_matrix = malloc(sizeof(*output_matrix) * row_count);
	if (output_matrix == 0)
	{		
		write(2, "malloc error\n", 13);
		return (0);
	}
	while (i < row_count)
	{
		output_matrix[i] = malloc(sizeof(**output_matrix) * col_count);
		if (output_matrix[i] == 0)
		{
			write(2, "malloc error\n", 13);
			return (0);
		}
		i++;
	}
	return (output_matrix);
}
