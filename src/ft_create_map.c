/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:54:28 by julauren          #+#    #+#             */
/*   Updated: 2026/01/25 16:11:04 by julauren         ###   ########.fr       */
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

static void	ft_read_file_map(char **readed_file, int fd)
{
	char	*buffer;
	char	*tmp;
	ssize_t	read_file;

	buffer = malloc(sizeof(*buffer) * (BUFFER_SIZE_SL + 1));
	if (!buffer)
		ft_exit(buffer, &*readed_file, 0);
	read_file = 1;
	while (read_file)
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
	close(fd);
}

static void	ft_check_map(char *str, char **map_file)
{
	t_ch	ch;
	int		fd;
	int		i;

	ft_bzero(&ch, sizeof(ch));
	fd = open(str, O_RDONLY);
	ft_read_file_map(&*map_file, fd);
	i = 0;
	while ((*map_file)[i] != '\0')
	{
		if ((*map_file)[i] == 'C')
			(ch.c)++;
		else if ((*map_file)[i] == 'E')
			(ch.e)++;
		else if ((*map_file)[i] == 'P')
			(ch.p)++;
		else if ((*map_file)[i] != 'C' && (*map_file)[i] != 'E' &&
			(*map_file)[i] != 'P' && (*map_file)[i] != '0' &&
			(*map_file)[i] != '1' && (*map_file)[i] != '\n')
			(ch.others)++;
		i++;
	}
	if (ch.e != 1 || ch.p != 1 || ch.c == 0 || ch.others != 0)
		ft_error_characters(&*map_file);
}

char	**ft_create_map(char *str)
{
	char	*map_file;
	char	**map;
	int		i;

	map_file = NULL;
	ft_check_map(str, &map_file);
	map = ft_split(map_file, '\n');
	free(map_file);
	i = 0;
	ft_printf("%t", map);
	return (map);
}
