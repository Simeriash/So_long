/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:04:54 by julauren          #+#    #+#             */
/*   Updated: 2026/02/03 16:55:49 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_map_modification(char **map, int x, int y)
{
	int	i;
	int	j;

	j = 0;
	x -= 2;
	y -= 2;
	while (++j < y)
	{
		i = 0;
		while (++i < x)
		{
			if (map[j][i] == '1')
			{
				if (map[j][i + 1] == '1' && map[j + 1][i + 1] == '1'
					&& map[j + 1][i] == '1')
				{
					map[j][i] = '2';
					map[j][i + 1] = '3';
					map[j + 1][i + 1] = '4';
					map[j + 1][i] = '5';
					i++;
				}
			}
		}
	}
}

void	ft_init_map(t_param *p, t_data *d)
{
	ft_init_assets(p, d);
	ft_map_modification(p->map, p->x, p->y);
	p->player = 's';
	p->exit = 'E';
}
