/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:04:17 by julauren          #+#    #+#             */
/*   Updated: 2026/02/03 14:43:04 by julauren         ###   ########.fr       */
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

static int	ft_loop_hook(t_param *p)
{
	ft_map(p);
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
	p.win = mlx_new_window(p.mlx, d.w, d.h, "\\\\_42_//");
	if (!(p.win))
		ft_exit_so_long(&p, 1);
	mlx_loop_hook(p.mlx, ft_loop_hook, &p);
	mlx_key_hook(p.win, ft_key_hook, &p);
	mlx_hook(p.win, 17, 0, ft_hook, &p);
	mlx_loop(p.mlx);
}
