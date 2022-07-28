/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 12:57:00 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/27 18:15:07 by ovan-rhe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "coollib.h"

// int main(void)
// {
// 	while(argv[])
// 	//matrix = readInput((argv[i]));
// 	//SOMERETURVALUE = calculate_Square(matrix);
// 	//print_matrix(RETURENVALUE, matrix);
// }
void	print_matrix(int **matrix, int size_row, int size_col);
void	bsq_program(char *text, int row_count, int col_count);
void	print_char_matrix(char **matrix, int row_count, int col_count);
char	*file_to_text(char *file);
int		text_to_matrix(char *file);

int	main(int argc, char **argv)
{
	int		i;
	int		ret;
	char	buf[1024];

	ret = 1;
	i = 1;
	if (argc == 1)
	{
		ret = read(0, &buf, sizeof(buf));
		buf[ret] = '\0';
		if (text_to_matrix(buf) == 0)
			return (0);
	}
	else if (argc > 1)
	{
		while (i < argc)
		{
			if (text_to_matrix(argv[i]) == 0)
				return (0);
			if (argc > 2)
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}

void	bsq_program(char *text, int row_count, int col_count)
{
	int		i;
	int		**matrix;
	int		*result_array;
	int		sp;
	char	**output_matrix;

	i = 0;
	matrix = malloc(sizeof(*matrix) * row_count);
	result_array = malloc(sizeof(*result_array) * 3);
	while (i < row_count)
	{
		matrix[i] = malloc(sizeof(**matrix) * col_count);
		i++;
	}
	sp = get_startpoint(text);
	input_to_matrix(text, matrix, sp);
	if (row_count == 1 || col_count == 1)
		result_array = the_edge(row_count, col_count, matrix, result_array);
	else
		result_array = calculate_square(matrix, result_array,
				row_count, col_count);
	output_matrix = back_to_char_matrix(matrix, row_count, col_count, text);
	output_matrix = output_creator_2000(result_array, output_matrix, text);
	print_char_matrix(output_matrix, row_count, col_count);
}

void	print_char_matrix(char **matrix, int row_count, int col_count)
{
	int	i;

	i = 0;
	while (i < row_count)
	{
		write(1, matrix[i], col_count);
		write(1, "\n", 1);
		i++;
	}
	return ;
}

char	*file_to_text(char *file)
{
	int		bytes;
	char	*text;

	bytes = return_sizeofbytes(file);
	text = malloc(sizeof(*text) * bytes);
	text = read_file(file, text, bytes);
	return (text);
}

int	text_to_matrix(char *file)
{
	char	*text;
	int		row_count;
	int		col_count;

	text = file_to_text(file);
	if (text == 0)
	{
		write(2, "error\n", 6);
		return (0);
	}
	else if (check(text) == -1)
	{
		write(2, "map error\n", 10);
		return (0);
	}
	row_count = get_rows(text);
	col_count = get_cols(text);
	if (row_count == -1 || col_count == -1)
	{
		write(2, "map error\n", 10);
		return (0);
	}
	bsq_program(text, row_count, col_count);
	return (1);
}
