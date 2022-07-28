/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   coollib.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/24 13:04:20 by ovan-rhe      #+#    #+#                 */
/*   Updated: 2022/07/24 15:33:20 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef COOLLIB_H
# define COOLLIB_H

typedef struct s_dict
{
	char	*nbr;
	char	*word;
}	t_dict;

char	*create_output_string(char *str);
char	*check(int number);

//Dictionary
t_dict	*dict_to_struct(char *text);
t_dict	put_in_dict(char *nbr, char *word, int i, t_dict *d1);
char	*lookup(char *text_number);

//Display numbers
char	*display_number(char *str);
char	*display_number_100(char number);
char	*display_number_10(char number);
char	*display_number_1(char number);
char	*display_edgecases(char number1, char number2);

//String Fuunctions
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
char	*copy_str_range(char *src, int i, int j);

//Read input
int		return_sizeofbytes(char *str);
char	*read_file(char *str, char *text, int bytes);

//Split Number
char	**number_list(char *text, int lines, int linelength);
char	*split_number(char *text, int line, int linelength);
int		countlines(char *text);
int		length_of_longest_line(char *text);

//Split Word
char	*split_word(char *text, int line, int linelength);
char	**word_list(char *text, int lines, int linelength);
int		startpoint(int line, char *text);

//Error
int		check_if_number(char *nbr);

#endif