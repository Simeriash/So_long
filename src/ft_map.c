/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:53:50 by julauren          #+#    #+#             */
/*   Updated: 2026/02/04 16:27:47 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

// static void	ft_condition_2_leave(t_param *p)
// {
// 	int	i;

// 	i = 0;
// 	if (p->map[p->p_y][p->p_x] == 'e')
// 	{
// 		while (i < 1000000000)
// 			i++;
// 		ft_exit_so_long(p, 0);
// 	}
// }

void	ft_map(t_param *p)
{
	int	i;
	int	j;
	int	w;
	int	h;

	w = p->w - 32;
	h = p->h - 32;
	mlx_put_image_to_window(p->mlx, p->win, p->a->cor_1, 0, 0);
	mlx_put_image_to_window(p->mlx, p->win, p->a->cor_2, w, 0);
	mlx_put_image_to_window(p->mlx, p->win, p->a->cor_3, w, h);
	mlx_put_image_to_window(p->mlx, p->win, p->a->cor_4, 0, h);
	ft_border_north_south(p, w, h);
	ft_border_east_west(p, w, h);
	j = 1;
	while (j < p->y - 1)
	{
		i = 1;
		while (i < p->x - 1)
		{
			ft_fill_the_map(p, i, j);
			i++;
		}
		j++;
	}
	// ft_condition_2_leave(p);
}
