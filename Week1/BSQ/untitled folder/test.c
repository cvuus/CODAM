#include <stdio.h>

int	get_rows(char *str)
{
	int	count;
	int	length_first_line;
	int	current_length;

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
	if (current_length != length_first_line)
		return (-1);
	return (count);
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
	}
	return (-1);
}


int main (void)
{
	char *string ="hhhh\nline2\nline3\nline4\nline5\nline67";
	printf("Cols: %d", get_cols(string));
}
