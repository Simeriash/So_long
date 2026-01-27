/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_redux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:24:36 by julauren          #+#    #+#             */
/*   Updated: 2026/01/27 17:33:33 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include <stdio.h>

static void	ft_exit(char **map, char **map_redux, int **map_node, int n)
{
	int	i;

	if (map_node)
	{
		i = 0;
		while (i < n)
			free(map_node[i++]);
		free(map_node);
		map_node = NULL;
		return ;
	}
	if (map_redux)
	{
		i = 0;
		while (i < n)
			free(map_redux[i++]);
		free(map_redux);
	}
	i = 0;
	while (map[i])
		free(map[i++]);
	free(map);
	exit(EXIT_FAILURE);
}

static void	ft_copy(char **map, char **map_redux, int line, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < line)
	{
		j = 0;
		while (j < col)
		{
			map_redux[i][j] = map[i + 1][j + 1];
			j++;
		}
		map_redux[i][j] = '\0';
		i++;
	}
	map_redux[i] = NULL;
}

char	**ft_map_redux(char **map)
{
	int		col;
	int		line;
	int		i;
	char	**map_redux;

	col = ft_strlen(map[0]);
	line = 0;
	while (map[line])
		line++;
	col -= 2;
	line -= 2;
	map_redux = malloc(sizeof(*map_redux) * (line + 1));
	if (!map_redux)
		ft_exit(map, NULL, NULL, 0);
	i = 0;
	while (i < line)
	{
		map_redux[i] = malloc(sizeof(**map_redux) * (col + 1));
		if (!map_redux[i])
			ft_exit(map, map_redux, NULL, i);
		i++;
	}
	ft_copy(map, map_redux, line, col);
	return (map_redux);
}

static void	ft_map_index(int **map_node, int col, int line)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 1;
	while (i < line)
	{
		j = 0;
		while (j < col)
		{
			map_node[i][j] = k;
			j++;
			k++;
		}
		i++;
	}
}

static void	ft_print_node(int **map_node, int col, int line)
{
	int	i;
	int	j;

	i = 0;
	while (i < line)
	{
		j = 0;
		while (j < col)
		{
			printf("%.3d ", map_node[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

int	**ft_map_node(char **map_redux)
{
	int	col;
	int	line;
	int	i;
	int	**map_node;

	col = ft_strlen(map_redux[0]);
	line = 0;
	while (map_redux[line])
		line++;
	map_node = malloc(sizeof(*map_node) * line);
	if (!map_node)
		return (NULL);
	i = 0;
	while (i < line)
	{
		map_node[i] = malloc(sizeof(**map_node) * col);
		if (!map_node[i])
			ft_exit(NULL, NULL, map_node, i);
		i++;
	}
	ft_map_index(map_node, col, line);
	ft_print_node(map_node, col, line);
	return (map_node);
}
