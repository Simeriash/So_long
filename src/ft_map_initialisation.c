/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_initialisation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:03:03 by julauren          #+#    #+#             */
/*   Updated: 2026/01/30 15:56:34 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_common_init(t_map *map_data)
{
	map_data->exit_close = "../assets/exit_close.xpm";
	map_data->exit_open = "../assets/exit_open.xpm";
	map_data->sapphire = "../assets/sapphire.xpm";
}

void	ft_init_map_1(t_map *map_data)
{
	map_data->corner_1 = "../assets/map_1/tree_3.xpm";
	map_data->corner_2 = "../assets/map_1/tree_4.xpm";
	map_data->corner_3 = "../assets/map_1/tree_1.xpm";
	map_data->corner_4 = "../assets/map_1/tree_2.xpm";
	map_data->border_top_1 = "../assets/map_1/tree_4.xpm";
	map_data->border_top_2 = "../assets/map_1/tree_3.xpm";
	map_data->border_right_1 = "../assets/map_1/tree_1.xpm";
	map_data->border_right_2 = "../assets/map_1/tree_4.xpm";
	map_data->border_botttom_1 = "../assets/map_1/tree_1.xpm";
	map_data->border_botttom_2 = "../assets/map_1/tree_2.xpm";
	map_data->border_left_1 = "../assets/map_1/tree_2.xpm";
	map_data->border_left_2 = "../assets/map_1/tree_3.xpm";
	map_data->wall = "../assets/map_1/bush.xpm";
	map_data->ground = "../assets/map_1/grass.xpm";
	map_data->tree_1 = "../assets/map_1/tree_1.xpm";
	map_data->tree_2 = "../assets/map_1/tree_2.xpm";
	map_data->tree_3 = "../assets/map_1/tree_3.xpm";
	map_data->tree_4 = "../assets/map_1/tree_4.xpm";
	map_data->player_1 = "../assets/map_1/player_1.xpm";
	map_data->player_2 = "../assets/map_1/player_2.xpm";
	map_data->player_3 = "../assets/map_1/player_3.xpm";
	map_data->player_4 = "../assets/map_1/player_4.xpm";
	ft_common_init(map_data);
}

void	ft_init_map_2(t_map *map_data)
{
	map_data->corner_1 = "../assets/map_2/corner_1.xpm";
	map_data->corner_2 = "../assets/map_2/corner_2.xpm";
	map_data->corner_3 = "../assets/map_2/corner_3.xpm";
	map_data->corner_4 = "../assets/map_2/corner_4.xpm";
	map_data->border_top_1 = "../assets/map_2/wall_1.xpm";
	map_data->border_top_2 = "../assets/map_2/wall_1.xpm";
	map_data->border_right_1 = "../assets/map_2/wall_2.xpm";
	map_data->border_right_2 = "../assets/map_2/wall_2.xpm";
	map_data->border_botttom_1 = "../assets/map_2/wall_3.xpm";
	map_data->border_botttom_2 = "../assets/map_2/wall_3.xpm";
	map_data->border_left_1 = "../assets/map_2/wall_4.xpm";
	map_data->border_left_2 = "../assets/map_2/wall_4.xpm";
	map_data->wall = "../assets/map_2/bush.xpm";
	map_data->ground = "../assets/map_2/gravel.xpm";
	map_data->tree_1 = "../assets/map_2/tree_1.xpm";
	map_data->tree_2 = "../assets/map_2/tree_2.xpm";
	map_data->tree_3 = "../assets/map_2/tree_3.xpm";
	map_data->tree_4 = "../assets/map_2/tree_4.xpm";
	map_data->player_1 = "../assets/map_2/player_1.xpm";
	map_data->player_2 = "../assets/map_2/player_2.xpm";
	map_data->player_3 = "../assets/map_2/player_3.xpm";
	map_data->player_4 = "../assets/map_2/player_4.xpm";
	ft_common_init(map_data);
}
