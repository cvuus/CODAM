#include <stdio.h>
#include <stdlib.h>

char	*display_number_1(char number);
char	*display_number(char *str);
char	*display_number_100(char number);
char	*display_number_10(char number);
int		ft_strlen(char *str);

char	*display_number(char *str)
{
	int		length;

	length = ft_strlen(str);
	if (length == 3)
	{
		//str = strcat(display_number_100(str[1]), str);
		//strcat(hundreds, "-");
		display_number_100(str[0]);
		length--;
	}
	if (length < 3)
	{
		//strcat(display_number_10(str[2]), str);
		//strcat(hundreds, "-");
		display_number_10(str[1]);
		length--;
	}
	if (length < 2)
	{
		//strcat(display_number_1(str[3], str));
		//strcat(hundreds, "-");
		display_number_1(str[2]);
	}
	return (str);
}

char	*display_number_100(char number)
{
	char	*ones;
	char	*hundreds;
	
	ones = malloc(sizeof(ones) * 2);
	//hundreds = strcat(display_number(number), hundreds);
	ones = display_number_1(number);
	//printf("%s\n",ones);
	//if (strcmp(g_d1[i].nbr, "100") == 1)
	//{
	//	hundreds = strcat(hundreds, "hundred");
	//}
	printf("hundred");
	return (hundreds);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*display_number_10(char number)
{
	char	*tens;

	if (number == '0')
		return (0);
	tens = malloc(sizeof(*tens) * 3);
	tens[0] = number;
	tens[1] = '0';
	tens[2] = '\0';
	//if (strcmp(g_d1[i].nbr, tens) == 1)
	printf("%s\n", tens);
		//return (g_d1[i].nbr);
		return (tens);
}

char	*display_number_1(char number)
{
	char	*ones;

	if (number == '0')
		return (0);
	ones = malloc(sizeof(*ones) * 2);
	ones[0] = number;
	ones[1] = '\0';
	//if (strcmp(g_d1[i].nbr, text) == 1)
	printf("%s\n", ones);
		//return (g_d1[i].nbr);
	return (ones);
}

int main(void)
{
	printf("%s\n", display_number("999"));
	return (0);
}
