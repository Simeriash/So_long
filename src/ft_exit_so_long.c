/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_so_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:29:23 by julauren          #+#    #+#             */
/*   Updated: 2026/02/02 13:45:47 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_free_assets_continued(void *mlx, t_asset *a)
{
	if (a->wall)
		mlx_destroy_image(mlx, a->wall);
	if (a->ground)
		mlx_destroy_image(mlx, a->ground);
	if (a->tree_1)
		mlx_destroy_image(mlx, a->tree_1);
	if (a->tree_2)
		mlx_destroy_image(mlx, a->tree_2);
	if (a->tree_3)
		mlx_destroy_image(mlx, a->tree_3);
	if (a->tree_4)
		mlx_destroy_image(mlx, a->tree_4);
	if (a->player_1)
		mlx_destroy_image(mlx, a->player_1);
	if (a->player_2)
		mlx_destroy_image(mlx, a->player_2);
	if (a->player_3)
		mlx_destroy_image(mlx, a->player_3);
	if (a->player_4)
		mlx_destroy_image(mlx, a->player_4);
	if (a->exit_close)
		mlx_destroy_image(mlx, a->exit_close);
	if (a->exit_open)
		mlx_destroy_image(mlx, a->exit_open);
}

static void	ft_free_assets(void *mlx, t_asset *a)
{
	if (a->corner_1)
		mlx_destroy_image(mlx, a->corner_1);
	if (a->corner_2)
		mlx_destroy_image(mlx, a->corner_2);
	if (a->corner_3)
		mlx_destroy_image(mlx, a->corner_3);
	if (a->corner_4)
		mlx_destroy_image(mlx, a->corner_4);
	if (a->top_1)
		mlx_destroy_image(mlx, a->top_1);
	if (a->top_2)
		mlx_destroy_image(mlx, a->top_2);
	if (a->right_1)
		mlx_destroy_image(mlx, a->right_1);
	if (a->right_2)
		mlx_destroy_image(mlx, a->right_2);
	if (a->botttom_1)
		mlx_destroy_image(mlx, a->botttom_1);
	if (a->botttom_2)
		mlx_destroy_image(mlx, a->botttom_2);
	if (a->left_1)
		mlx_destroy_image(mlx, a->left_1);
	if (a->left_2)
		mlx_destroy_image(mlx, a->left_2);
	ft_free_assets_continued(mlx, a);
}

void	ft_exit_so_long(t_param *p, int exit_code)
{
	if (p->mlx)
	{
		ft_free_assets(p->mlx, p->a);
		if (p->a->sapphire)
			mlx_destroy_image(p->mlx, p->a->sapphire);
		if (p->win)
			mlx_destroy_window(p->mlx, p->win);
		mlx_destroy_display(p->mlx);
		free(p->mlx);
	}
	ft_free_tab(p->map);
	if (exit_code == 0)
		exit(EXIT_SUCCESS);
	else
		exit(EXIT_FAILURE);
}
