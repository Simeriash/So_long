/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:22:20 by julauren          #+#    #+#             */
/*   Updated: 2026/02/03 17:03:52 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_key_w(t_param *p)
{
	if (p->player != 'w')
		p->player = 'w';
	if (p->map[p->p_y - 1][p->p_x] == '0' || p->map[p->p_y - 1][p->p_x] == 'C'
		|| p->map[p->p_y - 1][p->p_x] == 'e')
	{
		if (p->map[p->p_y - 1][p->p_x] == 'C')
			(p->c)--;
		p->map[p->p_y - 1][p->p_x] = 'P';
		p->map[p->p_y][p->p_x] = '0';
		(p->p_y)--;
	}
	if (p->c == 0)
		p->map[p->e_y][p->e_x] = 'e';
}

void	ft_key_a(t_param *p)
{
	if (p->player != 'a')
		p->player = 'a';
	if (p->map[p->p_y][p->p_x - 1] == '0' || p->map[p->p_y][p->p_x - 1] == 'C'
		|| p->map[p->p_y][p->p_x - 1] == 'e')
	{
		if (p->map[p->p_y][p->p_x - 1] == 'C')
			(p->c)--;
		p->map[p->p_y][p->p_x - 1] = 'P';
		p->map[p->p_y][p->p_x] = '0';
		(p->p_x)--;
	}
	if (p->c == 0)
		p->map[p->e_y][p->e_x] = 'e';
}

void	ft_key_s(t_param *p)
{
	if (p->player != 's')
		p->player = 's';
	if (p->map[p->p_y + 1][p->p_x] == '0' || p->map[p->p_y + 1][p->p_x] == 'C'
		|| p->map[p->p_y + 1][p->p_x] == 'e')
	{
		if (p->map[p->p_y + 1][p->p_x] == 'C')
			(p->c)--;
		p->map[p->p_y + 1][p->p_x] = 'P';
		p->map[p->p_y][p->p_x] = '0';
		(p->p_y)++;
	}
	if (p->c == 0)
		p->map[p->e_y][p->e_x] = 'e';
}

void	ft_key_d(t_param *p)
{
	if (p->player != 'd')
		p->player = 'd';
	if (p->map[p->p_y][p->p_x + 1] == '0' || p->map[p->p_y][p->p_x + 1] == 'C'
		|| p->map[p->p_y][p->p_x + 1] == 'e')
	{
		if (p->map[p->p_y][p->p_x + 1] == 'C')
			(p->c)--;
		p->map[p->p_y][p->p_x + 1] = 'P';
		p->map[p->p_y][p->p_x] = '0';
		(p->p_x)++;
	}
	if (p->c == 0)
		p->map[p->e_y][p->e_x] = 'e';
}
