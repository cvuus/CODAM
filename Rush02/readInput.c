/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   readInput.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 15:53:26 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/23 21:32:02 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*read_file(char *str, char *text, int bytes);
int		return_sizeofbytes(char *str);

// int	main(void)
// {
// 	int		bytes;
// 	char	*text;

// 	bytes = return_sizeofbytes("numbers.dict");
// 	printf("Final ret: %d\n", bytes);
// 	text = malloc(sizeof(*text) * bytes);
// 	text = read_file("numbers.dict", text, bytes);
// 	printf("%s\n", text);
// 	return (0);
// }

int	return_sizeofbytes(char *str)
{
	int		ret;
	int		bytes;
	int		fd;
	char	*buf;

	bytes = 1;
	ret = 1;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (0);
	while (ret != 0)
	{
		ret = read(fd, &buf, 1);
		bytes = bytes + ret;
	}
	close(fd);
	return (bytes);
}

char	*read_file(char *str, char *text, int bytes)
{
	int		ret;
	int		fd;

	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (0);
	ret = read(fd, text, bytes);
	text[bytes] = '\0';
	close(fd);
	return (text);
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
