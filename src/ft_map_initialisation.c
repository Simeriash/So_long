/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_initialisation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:03:03 by julauren          #+#    #+#             */
/*   Updated: 2026/01/30 17:01:44 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_init_map_1(t_data *data, char **map)
{
	data->corner_1 = "../assets/map_1/tree_3.xpm";
	data->corner_2 = "../assets/map_1/tree_4.xpm";
	data->corner_3 = "../assets/map_1/tree_1.xpm";
	data->corner_4 = "../assets/map_1/tree_2.xpm";
	data->border_top_1 = "../assets/map_1/tree_4.xpm";
	data->border_top_2 = "../assets/map_1/tree_3.xpm";
	data->border_right_1 = "../assets/map_1/tree_1.xpm";
	data->border_right_2 = "../assets/map_1/tree_4.xpm";
	data->border_botttom_1 = "../assets/map_1/tree_1.xpm";
	data->border_botttom_2 = "../assets/map_1/tree_2.xpm";
	data->border_left_1 = "../assets/map_1/tree_2.xpm";
	data->border_left_2 = "../assets/map_1/tree_3.xpm";
	data->wall = "../assets/map_1/bush.xpm";
	data->ground = "../assets/map_1/grass.xpm";
	data->tree_1 = "../assets/map_1/tree_1.xpm";
	data->tree_2 = "../assets/map_1/tree_2.xpm";
	data->tree_3 = "../assets/map_1/tree_3.xpm";
	data->tree_4 = "../assets/map_1/tree_4.xpm";
	data->player_1 = "../assets/map_1/player_1.xpm";
	data->player_2 = "../assets/map_1/player_2.xpm";
	data->player_3 = "../assets/map_1/player_3.xpm";
	data->player_4 = "../assets/map_1/player_4.xpm";
}

static void	ft_init_map_2(t_data *data, char **map)
{
	data->corner_1 = "../assets/map_2/corner_1.xpm";
	data->corner_2 = "../assets/map_2/corner_2.xpm";
	data->corner_3 = "../assets/map_2/corner_3.xpm";
	data->corner_4 = "../assets/map_2/corner_4.xpm";
	data->border_top_1 = "../assets/map_2/wall_1.xpm";
	data->border_top_2 = "../assets/map_2/wall_1.xpm";
	data->border_right_1 = "../assets/map_2/wall_2.xpm";
	data->border_right_2 = "../assets/map_2/wall_2.xpm";
	data->border_botttom_1 = "../assets/map_2/wall_3.xpm";
	data->border_botttom_2 = "../assets/map_2/wall_3.xpm";
	data->border_left_1 = "../assets/map_2/wall_4.xpm";
	data->border_left_2 = "../assets/map_2/wall_4.xpm";
	data->wall = "../assets/map_2/bush.xpm";
	data->ground = "../assets/map_2/gravel.xpm";
	data->tree_1 = "../assets/map_2/tree_1.xpm";
	data->tree_2 = "../assets/map_2/tree_2.xpm";
	data->tree_3 = "../assets/map_2/tree_3.xpm";
	data->tree_4 = "../assets/map_2/tree_4.xpm";
	data->player_1 = "../assets/map_2/player_1.xpm";
	data->player_2 = "../assets/map_2/player_2.xpm";
	data->player_3 = "../assets/map_2/player_3.xpm";
	data->player_4 = "../assets/map_2/player_4.xpm";

}

void	ft_init_map(t_data *data, char **map)
{
	int	i;

	data->x = ft_strlen(map[0]);
	i = -1;
	while (map[++i]);
	data->y = i;
	if (((data->x) % 2 == 0) && ((data->y) % 2 == 0))
		ft_init_map_1(data, map);
	else
		ft_init_map_2(data, map);
	data->exit_close = "../assets/exit_close.xpm";
	data->exit_open = "../assets/exit_open.xpm";
	data->sapphire = "../assets/sapphire.xpm";
	data->x *= 32;
	data->y *= 32;
}
