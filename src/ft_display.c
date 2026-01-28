/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:04:17 by julauren          #+#    #+#             */
/*   Updated: 2026/01/28 12:36:41 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_display(char **map)
{
	void	*mlx;
	void	*win;
	int		x;
	int		y;

	(void)map;
	mlx = mlx_init();
	win = mlx_new_window(mlx, 1280, 720, "\\\\_42_//");

	y = 200;
	while(y <= 300)
	{
		x = 200;
		while(x <= 300)
		{
			mlx_pixel_put(mlx, win, x, y, 0x00FFFF);
			x++;
		}
		y++;
	}
	mlx_loop(mlx);
	mlx_destroy_window(mlx, win);
	mlx_destroy_display(mlx);
	free(mlx);
}
