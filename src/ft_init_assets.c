/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_assets.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:03:03 by julauren          #+#    #+#             */
/*   Updated: 2026/02/01 16:12:25 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_files_to_image(void *mlx, t_asset *a, t_data *d)
{
	a->corner_1 = mlx_xpm_file_to_image(mlx, d->corner_1, &a->w, &a->h);
	a->corner_2 = mlx_xpm_file_to_image(mlx, d->corner_2, &a->w, &a->h);
	a->corner_3 = mlx_xpm_file_to_image(mlx, d->corner_3, &a->w, &a->h);
	a->corner_4 = mlx_xpm_file_to_image(mlx, d->corner_4, &a->w, &a->h);
	a->top_1 = mlx_xpm_file_to_image(mlx, d->top_1, &a->w, &a->h);
	a->top_2 = mlx_xpm_file_to_image(mlx, d->top_2, &a->w, &a->h);
	a->right_1 = mlx_xpm_file_to_image(mlx, d->right_1, &a->w, &a->h);
	a->right_2 = mlx_xpm_file_to_image(mlx, d->right_2, &a->w, &a->h);
	a->botttom_1 = mlx_xpm_file_to_image(mlx, d->botttom_1, &a->w, &a->h);
	a->botttom_2 = mlx_xpm_file_to_image(mlx, d->botttom_2, &a->w, &a->h);
	a->left_1 = mlx_xpm_file_to_image(mlx, d->left_1, &a->w, &a->h);
	a->left_2 = mlx_xpm_file_to_image(mlx, d->left_2, &a->w, &a->h);
	a->wall = mlx_xpm_file_to_image(mlx, d->wall, &a->w, &a->h);
	a->ground = mlx_xpm_file_to_image(mlx, d->ground, &a->w, &a->h);
	a->tree_1 = mlx_xpm_file_to_image(mlx, d->tree_1, &a->w, &a->h);
	a->tree_2 = mlx_xpm_file_to_image(mlx, d->tree_2, &a->w, &a->h);
	a->tree_3 = mlx_xpm_file_to_image(mlx, d->tree_3, &a->w, &a->h);
	a->tree_4 = mlx_xpm_file_to_image(mlx, d->tree_4, &a->w, &a->h);
	a->player_1 = mlx_xpm_file_to_image(mlx, d->player_1, &a->w, &a->h);
	a->player_2 = mlx_xpm_file_to_image(mlx, d->player_2, &a->w, &a->h);
	a->player_3 = mlx_xpm_file_to_image(mlx, d->player_3, &a->w, &a->h);
	a->player_4 = mlx_xpm_file_to_image(mlx, d->player_4, &a->w, &a->h);
	a->exit_close = mlx_xpm_file_to_image(mlx, d->exit_close, &a->w, &a->h);
	a->exit_open = mlx_xpm_file_to_image(mlx, d->exit_open, &a->w, &a->h);
	a->sapphire = mlx_xpm_file_to_image(mlx, d->sapphire, &a->w, &a->h);
}

static void	ft_init_map_1(t_data *d)
{
	d->corner_1 = "assets/map_1/tree_3.xpm";
	d->corner_2 = "assets/map_1/tree_4.xpm";
	d->corner_3 = "assets/map_1/tree_1.xpm";
	d->corner_4 = "assets/map_1/tree_2.xpm";
	d->top_1 = "assets/map_1/tree_4.xpm";
	d->top_2 = "assets/map_1/tree_3.xpm";
	d->right_1 = "assets/map_1/tree_1.xpm";
	d->right_2 = "assets/map_1/tree_4.xpm";
	d->botttom_1 = "assets/map_1/tree_1.xpm";
	d->botttom_2 = "assets/map_1/tree_2.xpm";
	d->left_1 = "assets/map_1/tree_2.xpm";
	d->left_2 = "assets/map_1/tree_3.xpm";
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
	d->exit_close = "assets/exit_close.xpm";
	d->exit_open = "assets/exit_open.xpm";
	d->sapphire = "assets/sapphire.xpm";
}

static void	ft_init_map_2(t_data *d)
{
	d->corner_1 = "assets/map_2/corner_1.xpm";
	d->corner_2 = "assets/map_2/corner_2.xpm";
	d->corner_3 = "assets/map_2/corner_3.xpm";
	d->corner_4 = "assets/map_2/corner_4.xpm";
	d->top_1 = "assets/map_2/wall_1.xpm";
	d->top_2 = "assets/map_2/wall_1.xpm";
	d->right_1 = "assets/map_2/wall_2.xpm";
	d->right_2 = "assets/map_2/wall_2.xpm";
	d->botttom_1 = "assets/map_2/wall_3.xpm";
	d->botttom_2 = "assets/map_2/wall_3.xpm";
	d->left_1 = "assets/map_2/wall_4.xpm";
	d->left_2 = "assets/map_2/wall_4.xpm";
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
	d->exit_close = "assets/exit_close.xpm";
	d->exit_open = "assets/exit_open.xpm";
	d->sapphire = "assets/sapphire.xpm";
}

static void	ft_ctrl(t_param *p, t_asset *a)
{
	if (a->corner_1 == NULL || a->corner_2 == NULL || a->corner_3 == NULL
		|| a->corner_4 == NULL || a->top_1 == NULL || a->top_2 == NULL
		|| a->right_1 == NULL || a->right_2 == NULL || a->botttom_1 == NULL
		|| a->botttom_2 == NULL || a->left_1 == NULL || a->left_2 == NULL
		|| a->wall == NULL || a->ground == NULL || a->tree_1 == NULL
		|| a->tree_2 == NULL || a->tree_3 == NULL || a->tree_4 == NULL
		|| a->player_1 == NULL || a->player_2 == NULL || a->player_3 == NULL
		|| a->player_4 == NULL || a->exit_close == NULL || a->exit_open == NULL
		|| a->sapphire == NULL)
	{
		p->win = NULL;
		ft_exit_so_long(p, 1);
	}
}

void	ft_init_assets(t_param *p, t_data *d, char **map)
{
	int	i;

	d->x = ft_strlen((map)[0]);
	i = 0;
	while ((map)[i])
		i++;
	d->y = i;
	if (((d->x) % 2 == 0) && ((d->y) % 2 == 0))
		ft_init_map_1(d);
	else
		ft_init_map_2(d);
	d->w = 32 * d->x;
	d->h = 32 * d->y;
	p->a->h = 32;
	p->a->w = 32;
	ft_files_to_image(p->mlx, p->a, d);
	ft_ctrl(p, p->a);
	// p->x = d->x;
	// p->y = d->y;
}
