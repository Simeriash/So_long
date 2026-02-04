/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:22:20 by julauren          #+#    #+#             */
/*   Updated: 2026/02/04 12:44:24 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_key_w(t_param *p)
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

static void	ft_key_a(t_param *p)
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

static void	ft_key_s(t_param *p)
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

static void	ft_key_d(t_param *p)
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

void	ft_move(int key, t_param *p)
{
	static int	i;

	if (key == 119)
		ft_key_w(p);
	else if (key == 97)
		ft_key_a(p);
	else if (key == 115)
		ft_key_s(p);
	else if (key == 100)
		ft_key_d(p);
	else
		return ;
	i++;
	ft_printf("Move : %d\n", i);
}
