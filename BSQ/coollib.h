/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   coollib.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 13:43:44 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/27 18:16:09 by ovan-rhe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef COOLLIB_H
# define COOLLIB_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

//Calculate Square
int		*calculate_square(int **matrix, int *array, int size_row, int size_col);
int		min(int **matrix, int row, int col);
void	print_matrix(int **matrix, int size_row, int size_col);
void	ft_putnbr(int number);
int		*the_edge(int row_count, int col_count, \
			int **matrix, int *result_array);

//Input processing
int		**input_to_matrix(char *input, int **matrix, int sp);
int		get_rows(char *str);
int		return_sizeofbytes(char *str);
char	*read_file(char *str, char *text, int bytes);
int		get_cols(char *str);
char	*create_chars(char *input);
int		get_startpoint(char *input);

//Output creation
char	**back_to_char_matrix(int **int_matrix, int row_count,
			int col_count, char *text);
char	**output_creator_2000(int *array, char **output_matrix, char *text);
char	**create_output_matrix(int row_count, int col_count);

//Map
int		check(char *text);

#endif
