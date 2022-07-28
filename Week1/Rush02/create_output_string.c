/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_output_string.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/24 11:59:44 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/24 12:36:01 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
char	*display_number(char *str);
char	*copy_str_range(char *src, int i, int j);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
char	*check(int number);

char	*create_output_string(char *str)
{
	int		length;
	char	*text;
	char	*tmp_text;
	char	*tmp_str;
	int		i;
	int		j;

	text = malloc(sizeof(*text) * 2000);
	tmp_text = malloc(sizeof(*text) * 2000);
	length = ft_strlen(str);
	i = 0;
	j = (length % 3) - 1;
	if (j == -1)
		j = 2;
	while (length > 0)
	{
		tmp_str = copy_str_range(str, i, j);
		tmp_text = ft_strcat(display_number(tmp_str), check(length));
		text = ft_strcat(text, tmp_text);
		i = j + 1;
		length = ft_strlen(str) - j - 1;
		j = j + 3;
	}
	return (text);
}

char	*check(int number)
{
	return ("-KEYWORD-");
}

int	main(void)
{
	char number[] = "1010000";
	printf("%s", create_output_string(number));
}
