/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:04:54 by julauren          #+#    #+#             */
/*   Updated: 2026/02/01 16:11:52 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

// static void	ft_map_modification(char **map, int x, int y)
// {
// 	int	i;
// 	int	j;

// 	(void)map;
// 	i = 1;
// 	j = 1;
// 	x--;
// 	y--;
// 	ft_printf("%d\t%d\n", x, y);

// }

void	ft_init_map(t_param *p, t_data *d, char **map)
{
	ft_init_assets(p, d, map);
	// ft_printf("%d\t%d\n", p->x, p->y);
	// ft_map_modification(p->map, p->x, p->y);
	// ft_printf("%d\t%d\n", p->x, p->y);
}
