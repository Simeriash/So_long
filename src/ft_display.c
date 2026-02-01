/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:04:17 by julauren          #+#    #+#             */
/*   Updated: 2026/02/01 08:42:21 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	ft_hook(t_param *p)
{
	ft_free_assets(p->mlx, p->a);
	mlx_destroy_window(p->mlx, p->win);
	mlx_destroy_display(p->mlx);
	free(p->mlx);
	ft_free_tab(p->map);
	exit(EXIT_SUCCESS);
	return (0);
}

static int	ft_key_hook(int key, t_param *p)
{
	if (key == 65307)
		ft_hook(p);
	return (0);
}

void	ft_display(char **map)
{
	t_data	d;
	t_asset	a;
	t_param	p;

	ft_init_map(&d, map);
	p.mlx = mlx_init();
	ft_init_assets(p.mlx, &a, &d);
	p.map = map;
	p.a = &a;
	p.win = mlx_new_window(p.mlx, d.width, d.height, "\\\\_42_//");
	mlx_put_image_to_window(p.mlx, p.win, a.corner_1, 0, 0);
	mlx_put_image_to_window(p.mlx, p.win, a.top_1, 32, 0);
	mlx_put_image_to_window(p.mlx, p.win, a.top_2, 64, 0);
	mlx_put_image_to_window(p.mlx, p.win, a.corner_2, d.width - 32, 0);
	mlx_put_image_to_window(p.mlx, p.win, a.right_1, d.width - 32, 32);
	mlx_put_image_to_window(p.mlx, p.win, a.right_2, d.width - 32, 64);
	mlx_put_image_to_window(p.mlx, p.win, a.corner_3, d.width - 32, d.height - 32);
	mlx_put_image_to_window(p.mlx, p.win, a.botttom_1, d.width - 96, d.height - 32);
	mlx_put_image_to_window(p.mlx, p.win, a.botttom_2, d.width - 64, d.height - 32);
	mlx_put_image_to_window(p.mlx, p.win, a.corner_4, 0, d.height - 32);
	mlx_put_image_to_window(p.mlx, p.win, a.left_1, 0, d.height - 96);
	mlx_put_image_to_window(p.mlx, p.win, a.left_2, 0, d.height - 64);
	mlx_put_image_to_window(p.mlx, p.win, a.ground, 32, 32);
	mlx_put_image_to_window(p.mlx, p.win, a.ground, 64, 32);
	mlx_put_image_to_window(p.mlx, p.win, a.ground, 96, 32);
	mlx_put_image_to_window(p.mlx, p.win, a.ground, 128, 32);
	mlx_put_image_to_window(p.mlx, p.win, a.ground, 160, 32);
	mlx_put_image_to_window(p.mlx, p.win, a.wall, 32, 64);
	mlx_put_image_to_window(p.mlx, p.win, a.tree_1, 64, 64);
	mlx_put_image_to_window(p.mlx, p.win, a.tree_2, 96, 64);
	mlx_put_image_to_window(p.mlx, p.win, a.tree_3, 96, 96);
	mlx_put_image_to_window(p.mlx, p.win, a.tree_4, 64, 96);
	mlx_put_image_to_window(p.mlx, p.win, a.player_1, 32, 32);
	mlx_put_image_to_window(p.mlx, p.win, a.player_2, 64, 32);
	mlx_put_image_to_window(p.mlx, p.win, a.player_3, 96, 32);
	mlx_put_image_to_window(p.mlx, p.win, a.player_4, 128, 32);
	mlx_put_image_to_window(p.mlx, p.win, a.exit_close, 128, 96);
	mlx_put_image_to_window(p.mlx, p.win, a.exit_open, 160, 96);
	mlx_put_image_to_window(p.mlx, p.win, a.sapphire, 160, 32);
	mlx_key_hook(p.win, ft_key_hook, &p);
	mlx_hook(p.win, 17, 0, ft_hook, &p);
	mlx_loop(p.mlx);
}
