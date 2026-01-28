/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:31:15 by julauren          #+#    #+#             */
/*   Updated: 2026/01/28 05:25:38 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_free(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}

int	main(int ac, char **av)
{
	char	**map;
	char	**map_dup;

	ft_error_args(ac, av);
	map = ft_create_map(av[1]);
	ft_printf("%t", map);
	// ft_pathfinding(map);
	map_dup = ft_tabdup(map);
	ft_printf("%t", map_dup);
	ft_free(map);
	ft_free(map_dup);
}
