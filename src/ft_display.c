/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:04:17 by julauren          #+#    #+#             */
/*   Updated: 2026/02/03 16:33:16 by julauren         ###   ########.fr       */
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
	else if (key == 119)
		ft_key_w(p);
	else if (key == 97)
		ft_key_a(p);
	else if (key == 115)
		ft_key_s(p);
	else if (key == 100)
		ft_key_d(p);
	return (0);
}

static int	ft_loop_hook(t_param *p)
{
	ft_map(p);
	return (0);
}

static void	ft_init_condition(t_param *p)
{
	int	i;
	int	j;

	j = 0;
	p->c = 0;
	while (++j < p->y - 1)
	{
		i = 0;
		while (++i < p->x - 1)
		{
			if (p->map[j][i] == 'P')
			{
				p->p_x = i;
				p->p_y = j;
			}
			if (p->map[j][i] == 'E')
			{
				p->e_x = i;
				p->e_y = j;
			}
			if (p->map[j][i] == 'C')
				(p->c)++;
		}
	}
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
	ft_init_condition(&p);
	p.win = mlx_new_window(p.mlx, d.w, d.h, "\\\\_42_//");
	if (!(p.win))
		ft_exit_so_long(&p, 1);
	mlx_key_hook(p.win, ft_key_hook, &p);
	mlx_hook(p.win, 17, 0, ft_hook, &p);
	mlx_loop_hook(p.mlx, ft_loop_hook, &p);
	mlx_loop(p.mlx);
}
