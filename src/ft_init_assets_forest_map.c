/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_assets_forest_map.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:36:44 by julauren          #+#    #+#             */
/*   Updated: 2026/02/04 16:38:36 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_init_2_be_continued(t_data *d)
{
	d->sapp = "assets/map_1/sapphire.xpm";
	d->p_e_1 = "assets/map_1/player_exit_1.xpm";
	d->p_e_2 = "assets/map_1/player_exit_2.xpm";
	d->p_e_3 = "assets/map_1/player_exit_3.xpm";
	d->p_e_4 = "assets/map_1/player_exit_4.xpm";
	d->p_o_1 = "assets/map_1/player_escape_1.xpm";
	d->p_o_2 = "assets/map_1/player_escape_2.xpm";
	d->p_o_3 = "assets/map_1/player_escape_3.xpm";
	d->p_o_4 = "assets/map_1/player_escape_4.xpm";
}

void	ft_init_assets_forest_map(t_data *d)
{
	d->cor_1 = "assets/map_1/tree_3.xpm";
	d->cor_2 = "assets/map_1/tree_4.xpm";
	d->cor_3 = "assets/map_1/tree_1.xpm";
	d->cor_4 = "assets/map_1/tree_2.xpm";
	d->top_1 = "assets/map_1/tree_4.xpm";
	d->top_2 = "assets/map_1/tree_3.xpm";
	d->right_1 = "assets/map_1/tree_1.xpm";
	d->right_2 = "assets/map_1/tree_4.xpm";
	d->bot_1 = "assets/map_1/tree_1.xpm";
	d->bot_2 = "assets/map_1/tree_2.xpm";
	d->left_1 = "assets/map_1/tree_2.xpm";
	d->left_2 = "assets/map_1/tree_3.xpm";
	d->wall = "assets/map_1/bush.xpm";
	d->ground = "assets/map_1/grass.xpm";
	d->tree_1 = "assets/map_1/tree_1.xpm";
	d->tree_2 = "assets/map_1/tree_2.xpm";
	d->tree_3 = "assets/map_1/tree_3.xpm";
	d->tree_4 = "assets/map_1/tree_4.xpm";
	d->p_1 = "assets/map_1/player_1.xpm";
	d->p_2 = "assets/map_1/player_2.xpm";
	d->p_3 = "assets/map_1/player_3.xpm";
	d->p_4 = "assets/map_1/player_4.xpm";
	d->e_c = "assets/exit_close.xpm";
	d->e_o = "assets/exit_open.xpm";
	ft_init_2_be_continued(d);
}
