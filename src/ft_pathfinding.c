/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pathfinding.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 05:50:16 by julauren          #+#    #+#             */
/*   Updated: 2026/01/31 09:19:03 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_free(char **map)
{
	ft_free_tab(map);
	exit(EXIT_FAILURE);
}

static void	ft_fill_map(char **map, int x, int y)
{
	if (map[x][y] == '1')
		return ;
	map[x][y] = '1';
	ft_fill_map(map, x, y + 1);
	ft_fill_map(map, x, y - 1);
	ft_fill_map(map, x + 1, y);
	ft_fill_map(map, x - 1, y);
	return ;
}

void	ft_pathfinding(char **map)
{
	int		x;
	int		y;
	char	**map_dup;

	map_dup = ft_tabdup(map);
	if (!map_dup)
		ft_free(map);
	ft_tabchr(map_dup, 'P', &x, &y);
	ft_fill_map(map_dup, x, y);
	if (ft_tabchr(map_dup, 'C', &x, &y) || ft_tabchr(map_dup, 'E', &x, &y))
		ft_error_path(map, map_dup);
	ft_free_tab(map_dup);
}
