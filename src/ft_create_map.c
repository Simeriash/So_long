/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:54:28 by julauren          #+#    #+#             */
/*   Updated: 2026/01/25 13:22:17 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_exit(char *buffer, char **readed_file, int fd)
{
	if (buffer)
	{
		free(buffer);
		close(fd);
	}
	if (*readed_file)
		free(*readed_file);
	exit(EXIT_FAILURE);
}

static void	ft_read_file_map(char *str, char **readed_file, int fd)
{
	char	*buffer;
	char	*tmp;
	ssize_t	read_file;

	buffer = malloc(sizeof(*buffer) * (BUFFER_SIZE_SL + 1));
	if (!buffer)
		ft_exit(buffer, &*readed_file, 0);
	read_file = 1;
	while (read_file )
	{
		read_file = read(fd, buffer, BUFFER_SIZE_SL);
		if (read_file == -1)
			ft_exit(buffer, &*readed_file, fd);
		if (read_file == 0)
			break ;
		buffer[read_file] = '\0';
		tmp = ft_strjoin(*readed_file, buffer);
		if (!tmp)
			ft_exit(buffer, &*readed_file, fd);
		free(*readed_file);
		*readed_file = tmp;
	}
	free(buffer);
}

static void	ft_check_map(char *str, char **map_file)
{
	t_ch	ch;
	int		fd;

	ft_bzero(&ch, sizeof(ch));
	fd = open(str, O_RDONLY);
	ft_read_file_map(str, &*map_file, fd);
	close(fd);
}

char	**ft_create_map(char *str)
{
	char	*map_file;

	map_file = NULL;
	ft_check_map(str, &map_file);
	printf("%s", map_file);
	free(map_file);
	return (NULL);
}
