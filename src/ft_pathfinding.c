/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pathfinding.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:05:14 by julauren          #+#    #+#             */
/*   Updated: 2026/01/27 16:45:16 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_free(char **map_redux, int **map_node)
{
	int	i;
	int	j;

	i = 0;
	while (map_redux[i])
	{
		free(map_redux[i]);
		i++;
	}
	free(map_redux);
	if (!map_node)
		return ;
	j = 0;
	while (j < i)
	{
		free(map_node[j]);
		j++;
	}
	free(map_node);
}

void	ft_pathfinding(char **map)
{
	char	**map_redux;
	int		**map_node;

	map_redux = ft_map_redux(map);
	ft_printf("%t", map_redux);
	map_node = ft_map_node(map_redux);
	ft_free(map_redux, map_node);
}
