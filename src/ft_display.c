/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:04:17 by julauren          #+#    #+#             */
/*   Updated: 2026/02/01 10:01:18 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	ft_hook(t_param *p)
{
	ft_exit_so_long(p, 0);
	return (0);
}

static int	ft_key_hook(int key, t_param *p)
{
	if (key == 65307)
		ft_exit_so_long(p, 0);
	return (0);
}

void	ft_display(char **map)
{
	t_param	p;
	t_data	d;
	t_asset	a;

	p.mlx = mlx_init();
	p.map = map;
	if (!(p.mlx))
		ft_exit_so_long(&p, 1);
	p.a = &a;
	ft_init_map(&p, &d);
	p.win = mlx_new_window(p.mlx, d.width, d.height, "\\\\_42_//");
	if (!(p.win))
		ft_exit_so_long(&p, 1);
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
