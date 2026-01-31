/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_initialisation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:03:03 by julauren          #+#    #+#             */
/*   Updated: 2026/01/31 11:44:40 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_init_map_1(t_data *d)
{
	d->corner_1 = "assets/map_1/tree_3.xpm";
	d->corner_2 = "assets/map_1/tree_4.xpm";
	d->corner_3 = "assets/map_1/tree_1.xpm";
	d->corner_4 = "assets/map_1/tree_2.xpm";
	d->border_top_1 = "assets/map_1/tree_4.xpm";
	d->border_top_2 = "assets/map_1/tree_3.xpm";
	d->border_right_1 = "assets/map_1/tree_1.xpm";
	d->border_right_2 = "assets/map_1/tree_4.xpm";
	d->border_botttom_1 = "assets/map_1/tree_1.xpm";
	d->border_botttom_2 = "assets/map_1/tree_2.xpm";
	d->border_left_1 = "assets/map_1/tree_2.xpm";
	d->border_left_2 = "assets/map_1/tree_3.xpm";
	d->wall = "assets/map_1/bush.xpm";
	d->ground = "assets/map_1/grass.xpm";
	d->tree_1 = "assets/map_1/tree_1.xpm";
	d->tree_2 = "assets/map_1/tree_2.xpm";
	d->tree_3 = "assets/map_1/tree_3.xpm";
	d->tree_4 = "assets/map_1/tree_4.xpm";
	d->player_1 = "assets/map_1/player_1.xpm";
	d->player_2 = "assets/map_1/player_2.xpm";
	d->player_3 = "assets/map_1/player_3.xpm";
	d->player_4 = "assets/map_1/player_4.xpm";
}

static void	ft_init_map_2(t_data *d)
{
	d->corner_1 = "assets/map_2/corner_1.xpm";
	d->corner_2 = "assets/map_2/corner_2.xpm";
	d->corner_3 = "assets/map_2/corner_3.xpm";
	d->corner_4 = "assets/map_2/corner_4.xpm";
	d->border_top_1 = "assets/map_2/wall_1.xpm";
	d->border_top_2 = "assets/map_2/wall_1.xpm";
	d->border_right_1 = "assets/map_2/wall_2.xpm";
	d->border_right_2 = "assets/map_2/wall_2.xpm";
	d->border_botttom_1 = "assets/map_2/wall_3.xpm";
	d->border_botttom_2 = "assets/map_2/wall_3.xpm";
	d->border_left_1 = "assets/map_2/wall_4.xpm";
	d->border_left_2 = "assets/map_2/wall_4.xpm";
	d->wall = "assets/map_2/bush.xpm";
	d->ground = "assets/map_2/gravel.xpm";
	d->tree_1 = "assets/map_2/tree_1.xpm";
	d->tree_2 = "assets/map_2/tree_2.xpm";
	d->tree_3 = "assets/map_2/tree_3.xpm";
	d->tree_4 = "assets/map_2/tree_4.xpm";
	d->player_1 = "assets/map_2/player_1.xpm";
	d->player_2 = "assets/map_2/player_2.xpm";
	d->player_3 = "assets/map_2/player_3.xpm";
	d->player_4 = "assets/map_2/player_4.xpm";
}

void	ft_init_map(t_data *d, char **map)
{
	int	i;

	d->x = ft_strlen(map[0]);
	i = 0;
	while (map[i])
		i++;
	d->y = i;
	if (((d->x) % 2 == 0) && ((d->y) % 2 == 0))
		ft_init_map_1(d);
	else
		ft_init_map_2(d);
	d->exit_close = "assets/exit_close.xpm";
	d->exit_open = "assets/exit_open.xpm";
	d->sapphire = "assets/sapphire.xpm";
	d->width = 32 * d->x;
	d->height = 32 * d->y;
}
