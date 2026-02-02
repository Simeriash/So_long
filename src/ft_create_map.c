/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:54:28 by julauren          #+#    #+#             */
/*   Updated: 2026/02/02 11:17:47 by julauren         ###   ########.fr       */
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
	if (readed_file)
		free(readed_file);
	exit(EXIT_FAILURE);
}

static void	ft_read_file_map(char **readed_file, int fd)
{
	char	*buffer;
	char	*tmp;
	ssize_t	read_file;

	*readed_file = NULL;
	buffer = malloc(sizeof(*buffer) * (BUFFER_SIZE_SL + 1));
	if (!buffer)
		ft_exit(buffer, readed_file, 0);
	read_file = 1;
	while (read_file)
	{
		read_file = read(fd, buffer, BUFFER_SIZE_SL);
		if (read_file == -1 || (read_file == 0 && *readed_file == NULL))
			ft_exit(buffer, readed_file, fd);
		if (read_file == 0)
			break ;
		buffer[read_file] = '\0';
		tmp = ft_strjoin(*readed_file, buffer);
		if (!tmp)
			ft_exit(buffer, readed_file, fd);
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
	ft_read_file_map(map_file, fd);
	i = -1;
	while ((*map_file)[++i] != '\0')
	{
		if ((*map_file)[i] == 'C')
			(ch.c)++;
		else if ((*map_file)[i] == 'E')
			(ch.e)++;
		else if ((*map_file)[i] == 'P')
			(ch.p)++;
		else if ((*map_file)[i] == '0')
			(ch.es)++;
		else if ((*map_file)[i] != 'C' && (*map_file)[i] != 'E' &&
			(*map_file)[i] != 'P' && (*map_file)[i] != '0' &&
			(*map_file)[i] != '1' && (*map_file)[i] != '\n')
			(ch.o)++;
	}
	if (ch.e != 1 || ch.p != 1 || ch.c == 0 || ch.es == 0 || ch.o != 0)
		ft_error_characters(map_file);
}

static void	ft_map_surround(char **map, int x, int y)
{
	int	i;

	if (x > 60 || y > 30)
		ft_error_map(map, 1);
	i = 0;
	x--;
	y--;
	while (i <= x)
	{
		if (map[0][i] != '1' || map[y][i] != '1')
			ft_error_map(map, 2);
		i++;
	}
	i = 0;
	while (i <= y)
	{
		if (map[i][0] != '1' || map[i][x] != '1')
			ft_error_map(map, 2);
		i++;
	}
}

char	**ft_create_map(char *str)
{
	char	*map_file;
	char	**map;
	int		i;
	size_t	len;

	ft_check_map(str, &map_file);
	if (map_file[0] == '\n'
		|| (ft_strnstr(map_file, "\n\n", ft_strlen(map_file))))
		ft_error_characters(&map_file);
	map = ft_split(map_file, '\n');
	free(map_file);
	if (!map)
		exit(EXIT_FAILURE);
	len = ft_strlen(map[0]);
	i = 0;
	while (map[++i])
	{
		if (len != ft_strlen(map[i])
			|| (i + 1 == (int)len && map[i + 1] == NULL))
			ft_error_map(map, 0);
	}
	if ((len < 6 && i < 4) || (len < 4 && i < 6) || len < 3 || i < 3)
		ft_error_map(map, 1);
	ft_map_surround(map, len, i);
	return (map);
}
