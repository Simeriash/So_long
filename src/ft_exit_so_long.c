/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_so_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 10:29:23 by julauren          #+#    #+#             */
/*   Updated: 2026/02/04 16:43:50 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_free_assets_continued_again(void *mlx, t_asset *a)
{
	if (a->sapp)
		mlx_destroy_image(mlx, a->sapp);
	if (a->p_e_1)
		mlx_destroy_image(mlx, a->p_e_1);
	if (a->p_e_2)
		mlx_destroy_image(mlx, a->p_e_2);
	if (a->p_e_3)
		mlx_destroy_image(mlx, a->p_e_3);
	if (a->p_e_4)
		mlx_destroy_image(mlx, a->p_e_4);
	if (a->p_o_1)
		mlx_destroy_image(mlx, a->p_o_1);
	if (a->p_o_2)
		mlx_destroy_image(mlx, a->p_o_2);
	if (a->p_o_3)
		mlx_destroy_image(mlx, a->p_o_3);
	if (a->p_o_4)
		mlx_destroy_image(mlx, a->p_o_4);
}

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
	if (a->p_1)
		mlx_destroy_image(mlx, a->p_1);
	if (a->p_2)
		mlx_destroy_image(mlx, a->p_2);
	if (a->p_3)
		mlx_destroy_image(mlx, a->p_3);
	if (a->p_4)
		mlx_destroy_image(mlx, a->p_4);
	if (a->e_c)
		mlx_destroy_image(mlx, a->e_c);
	if (a->e_o)
		mlx_destroy_image(mlx, a->e_o);
	ft_free_assets_continued_again(mlx, a);
}

static void	ft_free_assets(void *mlx, t_asset *a)
{
	if (a->cor_1)
		mlx_destroy_image(mlx, a->cor_1);
	if (a->cor_2)
		mlx_destroy_image(mlx, a->cor_2);
	if (a->cor_3)
		mlx_destroy_image(mlx, a->cor_3);
	if (a->cor_4)
		mlx_destroy_image(mlx, a->cor_4);
	if (a->top_1)
		mlx_destroy_image(mlx, a->top_1);
	if (a->top_2)
		mlx_destroy_image(mlx, a->top_2);
	if (a->right_1)
		mlx_destroy_image(mlx, a->right_1);
	if (a->right_2)
		mlx_destroy_image(mlx, a->right_2);
	if (a->bot_1)
		mlx_destroy_image(mlx, a->bot_1);
	if (a->bot_2)
		mlx_destroy_image(mlx, a->bot_2);
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
