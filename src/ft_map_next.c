/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_next.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:54:40 by julauren          #+#    #+#             */
/*   Updated: 2026/02/04 14:58:25 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_border_north_south(t_param *p, int w, int h)
{
	int	i;
	int	j;

	i = 32;
	j = 1;
	while (i < w)
	{
		if (j % 2 == 1)
		{
			mlx_put_image_to_window(p->mlx, p->win, p->a->top_1, i, 0);
			mlx_put_image_to_window(p->mlx, p->win, p->a->bot_1, i, h);
		}
		else
		{
			mlx_put_image_to_window(p->mlx, p->win, p->a->top_2, i, 0);
			mlx_put_image_to_window(p->mlx, p->win, p->a->bot_2, i, h);
		}
		j++;
		i += 32;
	}
}

void	ft_border_east_west(t_param *p, int w, int h)
{
	int	i;
	int	j;

	i = 32;
	j = 1;
	while (i < h)
	{
		if (j % 2 == 1)
		{
			mlx_put_image_to_window(p->mlx, p->win, p->a->left_1, 0, i);
			mlx_put_image_to_window(p->mlx, p->win, p->a->right_1, w, i);
		}
		else
		{
			mlx_put_image_to_window(p->mlx, p->win, p->a->left_2, 0, i);
			mlx_put_image_to_window(p->mlx, p->win, p->a->right_2, w, i);
		}
		j++;
		i += 32;
	}
}

static void	ft_player(t_param *p, int i, int j)
{
	if (p->player == 's')
		mlx_put_image_to_window(p->mlx, p->win, p->a->p_1, 32 * i, 32 * j);
	else if (p->player == 'w')
		mlx_put_image_to_window(p->mlx, p->win, p->a->p_2, 32 * i, 32 * j);
	else if (p->player == 'a')
		mlx_put_image_to_window(p->mlx, p->win, p->a->p_3, 32 * i, 32 * j);
	else if (p->player == 'd')
		mlx_put_image_to_window(p->mlx, p->win, p->a->p_4, 32 * i, 32 * j);
}

static void	ft_exit(t_param *p, int i, int j)
{
	if (p->player == 'b')
		mlx_put_image_to_window(p->mlx, p->win, p->a->p_e_1, 32 * i, 32 * j);
	else if (p->player == 'u')
		mlx_put_image_to_window(p->mlx, p->win, p->a->p_e_2, 32 * i, 32 * j);
	else if (p->player == 'l')
		mlx_put_image_to_window(p->mlx, p->win, p->a->p_e_3, 32 * i, 32 * j);
	else if (p->player == 'r')
		mlx_put_image_to_window(p->mlx, p->win, p->a->p_e_4, 32 * i, 32 * j);
	else
		mlx_put_image_to_window(p->mlx, p->win, p->a->e_c, 32 * i, 32 * j);
}

void	ft_fill_the_map(t_param *p, int i, int j)
{
	if (p->map[j][i] == '0')
		mlx_put_image_to_window(p->mlx, p->win, p->a->ground, 32 * i, 32 * j);
	else if (p->map[j][i] == '1')
		mlx_put_image_to_window(p->mlx, p->win, p->a->wall, 32 * i, 32 * j);
	else if (p->map[j][i] == '2')
		mlx_put_image_to_window(p->mlx, p->win, p->a->tree_1, 32 * i, 32 * j);
	else if (p->map[j][i] == '3')
		mlx_put_image_to_window(p->mlx, p->win, p->a->tree_2, 32 * i, 32 * j);
	else if (p->map[j][i] == '4')
		mlx_put_image_to_window(p->mlx, p->win, p->a->tree_3, 32 * i, 32 * j);
	else if (p->map[j][i] == '5')
		mlx_put_image_to_window(p->mlx, p->win, p->a->tree_4, 32 * i, 32 * j);
	else if (p->map[j][i] == 'E')
		ft_exit(p, i, j);
	else if (p->map[j][i] == 'e')
		mlx_put_image_to_window(p->mlx, p->win, p->a->e_o, 32 * i, 32 * j);
	else if (p->map[j][i] == 'C')
		mlx_put_image_to_window(p->mlx, p->win, p->a->sapp, 32 * i, 32 * j);
	else if (p->map[j][i] == 'P')
		ft_player(p, i, j);
}
