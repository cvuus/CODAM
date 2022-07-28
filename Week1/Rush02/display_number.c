#include <stdio.h>
#include <stdlib.h>

char	*display_number(char *str);
char	*display_number_100(char number);
char	*display_number_10(char number);
char	*display_number_1(char number);
char	*display_edgecases(char number1, char number2);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);

char	*display_number(char *str)
{
	int		length;
	char	*text;
	int		i;

	text = malloc(sizeof(*text) * 1000);
	text[0] = '\0';
	length = ft_strlen(str);
	i = ft_strlen(str);
	if (length == 3 && str[0] != '0')
			text = ft_strcat(display_number_100(str[0]), text);
	if (--length < 3)
	{
		text = ft_strcat(text, "-");
		if (str[i - 2] == '1')
		{
			text = ft_strcat(text, display_edgecases(str[i - 2], str[i - 1]));
			return (text);
		}
		text = ft_strcat(text, display_number_10(str[i - 2]));
	}
	text = ft_strcat(text, "-");
	if (--length < 2)
		text = ft_strcat(text, display_number_1(str[i - 1]));
	return (text);
}

char	*display_number_100(char number)
{
	char	*ones;
	char	*hundreds;

	if (number == '0')
		return ("");
	hundreds = malloc(sizeof(ones) * 20);
	ones = malloc(sizeof(ones) * 20);
	ones = display_number_1(number);
	hundreds = ft_strcat(ones, "-");
	hundreds = ft_strcat(hundreds, "hundred");
	return (hundreds);
}

char	*display_number_10(char number)
{
	char	*tens;

	if (number == '0')
		return ("");
	tens = malloc(sizeof(*tens) * 10);
	tens[0] = number;
	tens[1] = '0';
	tens[2] = '\0';
	return (tens);
}

char	*display_number_1(char number)
{
	char	*ones;

	if (number == '0')
		return ("");
	ones = malloc(sizeof(*ones) * 2);
	ones[0] = number;
	ones[1] = '\0';
	return (ones);
}

char	*display_edgecases(char number1, char number2)
{
	char	*text;

	text = malloc(sizeof(*text) * 3);
	text[0] = number1;
	text[1] = number2;
	text[2] = '\0';
	return (text);
}

// int main(void)
// {
// 	char *str;
// 	str = malloc(sizeof(*str) * 1000);
// 	str = display_number("999");
// 	printf("%s", str);
// 	return (0);
// }
