/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:04:17 by julauren          #+#    #+#             */
/*   Updated: 2026/01/31 09:29:44 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	ft_key_hook(int key, t_param *p)
{
	if (key == 65307)
	{
		mlx_destroy_window(p->mlx, p->win);
		mlx_destroy_display(p->mlx);
		free(p->mlx);
		ft_free_tab(p->map);
		exit(EXIT_SUCCESS);
	}
	return (0);
}

static int	ft_hook(t_param *p)
{
	mlx_destroy_window(p->mlx, p->win);
	mlx_destroy_display(p->mlx);
	free(p->mlx);
	ft_free_tab(p->map);
	exit(EXIT_SUCCESS);
	return (0);
}

void	ft_display(char **map)
{
	t_data	d;
	t_param	p;

	ft_init_map(&d, map);
	p.mlx = mlx_init();
	p.map = map;
	p.win = mlx_new_window(p.mlx, d.width, d.height, "\\\\_42_//");
	mlx_key_hook(p.win, ft_key_hook, &p);
	mlx_hook(p.win, 17, 0, ft_hook, &p);
	mlx_loop(p.mlx);
}
