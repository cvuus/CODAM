/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   readInput.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 15:53:26 by cuechtri      #+#    #+#                 */
/*   Updated: 2022/07/24 13:22:27 by ovan-rhe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "coollib.h"

// char	*read_file(char *str, char *text, int bytes);
// int		return_sizeofbytes(char *str);

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
