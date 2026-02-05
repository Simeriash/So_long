/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:53:50 by julauren          #+#    #+#             */
/*   Updated: 2026/02/05 10:42:26 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

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
}
