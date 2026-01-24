/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 10:54:28 by julauren          #+#    #+#             */
/*   Updated: 2026/01/24 16:51:12 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_exit(char *buffer, char *readed_file)
{
	if (buffer)
		free(buffer);
	if (readed_file)
		free(readed_file);
	exit(EXIT_FAILURE);
}

static void	ft_read(int fd, ssize_t *read_file, char *buffer, char *readed_file)
{
	char	*tmp;

	*read_file = read(fd, buffer, BUFFER_SIZE_SL);
	if (*read_file == -1)
		ft_exit(buffer, readed_file);
	if (*read_file == 0)
		return ;
	buffer[*read_file] = '\0';
	tmp = ft_strjoin(readed_file, buffer);
	if (!tmp)
		ft_exit(buffer, readed_file);
	free(readed_file);
	readed_file = tmp;
}

static char	*ft_read_file_map(char *str)
{
	int		fd;
	char	*buffer;
	char	*readed_file;
	ssize_t	read_file;

	readed_file = NULL;
	buffer = malloc(sizeof(*buffer) * (BUFFER_SIZE_SL + 1));
	if (!buffer)
		ft_exit(buffer, readed_file);
	fd = open(str, O_RDONLY);
	read_file = 1;
	while (read_file)
		ft_read(fd, &read_file, buffer, readed_file);
	free(buffer);
	return (readed_file);
}

static char	*ft_check_map(char *str)
{
	char	*readed_file;
	t_ch	ch;

	ft_bzero(&ch, sizeof(ch));
	readed_file = ft_read_file_map(str);
	return (readed_file);
}

char	**ft_create_map(char *str)
{
	char	*map_file;

	map_file = ft_check_map(str);
	ft_printf("%s", map_file);
	free(map_file);
	return (NULL);
}
