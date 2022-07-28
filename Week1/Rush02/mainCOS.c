#include <stdio.h>
#include <stdlib.h>

char	*read_file(char *str, char *text, int bytes);
int		return_sizeofbytes(char *str);
int		countlines(char *text);
int		length_of_longest_line(char *text);
char	*split_number(char *text, int line, int linelength);
char 	**number_list(char *text, int lines, int linelength);
char	*split_word(char *text, int line, int linelength);
char	**word_list(char *text, int lines, int linelength);

int	main(void)
{
	int		bytes;
	char	*text;
	char	**numbers;
	char	**words;
	int		lines;
	int		linelength;
	int 	i;

	bytes = return_sizeofbytes("numbers.dict");
	text = malloc(sizeof(*text) * bytes);
	text = read_file("numbers.dict", text, bytes);
	lines = countlines(text);
	linelength = length_of_longest_line(text);
	i = 0;
	numbers = number_list(text, lines, linelength);
	printf("%s\n", numbers[28]);
	words = word_list(text, lines, linelength);
	printf("%s\n", words[28]);
}