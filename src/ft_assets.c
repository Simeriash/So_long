/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assets.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:29:23 by julauren          #+#    #+#             */
/*   Updated: 2026/01/31 13:05:11 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_init_assets(void *mlx, t_asset *a, t_data *d)
{
	a->height = 32;
	a->width = 32;
	a->corner_1 = mlx_xpm_file_to_image(mlx, d->corner_1, &a->width, &a->height);
	a->corner_2 = mlx_xpm_file_to_image(mlx, d->corner_2, &a->width, &a->height);
	a->corner_3 = mlx_xpm_file_to_image(mlx, d->corner_3, &a->width, &a->height);
	a->corner_4 = mlx_xpm_file_to_image(mlx, d->corner_4, &a->width, &a->height);
	a->border_top_1 = mlx_xpm_file_to_image(mlx, d->border_top_1, &a->width, &a->height);
	a->border_top_2 = mlx_xpm_file_to_image(mlx, d->border_top_2, &a->width, &a->height);
	a->border_right_1 = mlx_xpm_file_to_image(mlx, d->border_right_1, &a->width, &a->height);
	a->border_right_2 = mlx_xpm_file_to_image(mlx, d->border_right_2, &a->width, &a->height);
	a->border_botttom_1 = mlx_xpm_file_to_image(mlx, d->border_botttom_1, &a->width, &a->height);
	a->border_botttom_2 = mlx_xpm_file_to_image(mlx, d->border_botttom_2, &a->width, &a->height);
	a->border_left_1 = mlx_xpm_file_to_image(mlx, d->border_left_1, &a->width, &a->height);
	a->border_left_2 = mlx_xpm_file_to_image(mlx, d->border_left_2, &a->width, &a->height);
	a->wall = mlx_xpm_file_to_image(mlx, d->wall, &a->width, &a->height);
	a->ground = mlx_xpm_file_to_image(mlx, d->ground, &a->width, &a->height);
	a->tree_1 = mlx_xpm_file_to_image(mlx, d->tree_1, &a->width, &a->height);
	a->tree_2 = mlx_xpm_file_to_image(mlx, d->tree_2, &a->width, &a->height);
	a->tree_3 = mlx_xpm_file_to_image(mlx, d->tree_3, &a->width, &a->height);
	a->tree_4 = mlx_xpm_file_to_image(mlx, d->tree_4, &a->width, &a->height);
	a->player_1 = mlx_xpm_file_to_image(mlx, d->player_1, &a->width, &a->height);
	a->player_2 = mlx_xpm_file_to_image(mlx, d->player_2, &a->width, &a->height);
	a->player_3 = mlx_xpm_file_to_image(mlx, d->player_3, &a->width, &a->height);
	a->player_4 = mlx_xpm_file_to_image(mlx, d->player_4, &a->width, &a->height);
	a->exit_close = mlx_xpm_file_to_image(mlx, d->exit_close, &a->width, &a->height);
	a->exit_open = mlx_xpm_file_to_image(mlx, d->exit_open, &a->width, &a->height);
	a->sapphire = mlx_xpm_file_to_image(mlx, d->sapphire, &a->width, &a->height);
}

void	ft_free_assets(void *mlx, t_asset *a)
{
	mlx_destroy_image(mlx, a->corner_1);
	mlx_destroy_image(mlx, a->corner_2);
	mlx_destroy_image(mlx, a->corner_3);
	mlx_destroy_image(mlx, a->corner_4);
	mlx_destroy_image(mlx, a->border_top_1);
	mlx_destroy_image(mlx, a->border_top_2);
	mlx_destroy_image(mlx, a->border_right_1);
	mlx_destroy_image(mlx, a->border_right_2);
}
