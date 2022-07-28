/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   calculate_square.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/26 09:41:03 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/27 18:18:51 by ovan-rhe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "coollib.h"

//ResultArray[0] = Current Size of Biggest Square
//ResultArray[1] = Row Position of Bottom Right Corner of Square
//ResultArray[2] = Col Position of Bottom Right Corner of Square

int	*calculate_square(int **matrix, int *array, int size_row, int size_col)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < size_row)
	{
		while (col < size_col)
		{
			if (row != 0 && col != 0 && matrix[row][col] != 0)
			{
				matrix[row][col] = matrix[row][col] + min(matrix, row, col);
				if (array[0] < matrix[row][col])
				{
					array[0] = matrix[row][col];
					array[1] = row;
					array[2] = col;
				}
			}
			col++;
		}
		col = 0;
		row++;
	}
	return (array);
}

int	min(int **matrix, int row, int col)
{
	int	value1;
	int	value2;
	int	value3;	

	value1 = matrix[row][col - 1];
	value2 = matrix[row - 1][col];
	value3 = matrix[row - 1][col - 1];
	if ((value1 < value2) && (value1 < value3))
	{
		return (value1);
	}
	else if (value2 < value3)
	{
		return (value2);
	}
	else
		return (value3);
}

void	print_matrix(int **matrix, int size_row, int size_col)
{
	int		row;
	int		col;

	row = 0;
	col = 0;
	while (row < size_row)
	{
		while (col < size_col)
		{
			ft_putnbr(matrix[row][col]);
			col++;
		}
		col = 0;
		write(1, "\n", 1);
		row++;
	}
}

void	ft_putnbr(int number)
{	
	char	c;

	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		number = number * (-1);
	}
	if (number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	if (number <= 9)
	{
		c = number + '0';
		write(1, &c, 1);
	}
}

int	*the_edge(int row_count, int col_count, int **matrix, int *result_array)
{
	int	i;

	i = -1;
	result_array[0] = 1;
	while (i++ < row_count && col_count == 1)
	{
		if (matrix[i][0] != 0)
		{
			result_array[0] = 1;
			result_array[1] = i;
			result_array[2] = 0;
			return (result_array);
		}
	}
	while (i++ < col_count && row_count == 1)
	{
		if (matrix[0][i] != 0)
		{
			result_array[0] = 1;
			result_array[1] = 0;
			result_array[2] = i;
			return (result_array);
		}
	}
	return (result_array);
}
