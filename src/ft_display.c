/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:04:17 by julauren          #+#    #+#             */
/*   Updated: 2026/01/30 16:54:27 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_display(char **map)
{
	void	*mlx;
	void	*win;
	t_data	data;

	ft_init_map(&data, map);
	mlx = mlx_init();
	win = mlx_new_window(mlx, 1280, 720, "\\\\_42_//");
	mlx_loop(mlx);
	mlx_destroy_window(mlx, win);
	mlx_destroy_display(mlx);
	free(mlx);
}
