/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:22:20 by julauren          #+#    #+#             */
/*   Updated: 2026/02/05 10:28:36 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_key_w(t_param *p, int *i)
{
	if (p->map[p->p_y - 1][p->p_x] >= '1' && p->map[p->p_y - 1][p->p_x] <= '5'
		&& p->map[p->p_y][p->p_x] == 'E')
		p->player = 'u';
	else if (p->player != 'w' && p->map[p->p_y][p->p_x] != 'E')
		p->player = 'w';
	if (p->map[p->p_y - 1][p->p_x] == '0' || p->map[p->p_y - 1][p->p_x] == 'C'
		|| p->map[p->p_y - 1][p->p_x] == 'e')
	{
		if (p->player != 'w')
			p->player = 'w';
		if (p->map[p->p_y - 1][p->p_x] == 'C')
			(p->c)--;
		if (p->map[p->p_y][p->p_x] != 'E' && p->map[p->p_y][p->p_x] != 'e')
			p->map[p->p_y][p->p_x] = '0';
		p->map[p->p_y - 1][p->p_x] = 'P';
		(p->p_y)--;
		ft_printf("Move : %d\n", (*i)++);
	}
	else if (p->map[p->p_y - 1][p->p_x] == 'E')
	{
		p->map[p->p_y][p->p_x] = '0';
		p->player = 'u';
		(p->p_y)--;
		ft_printf("Move : %d\n", (*i)++);
	}
}

static void	ft_key_a(t_param *p, int *i)
{
	if (p->map[p->p_y][p->p_x - 1] >= '1' && p->map[p->p_y][p->p_x - 1] <= '5'
		&& p->map[p->p_y][p->p_x] == 'E')
		p->player = 'l';
	else if (p->player != 'a' && p->map[p->p_y][p->p_x] != 'E')
		p->player = 'a';
	if (p->map[p->p_y][p->p_x - 1] == '0' || p->map[p->p_y][p->p_x - 1] == 'C'
		|| p->map[p->p_y][p->p_x - 1] == 'e')
	{
		if (p->player != 'a')
			p->player = 'a';
		if (p->map[p->p_y][p->p_x - 1] == 'C')
			(p->c)--;
		if (p->map[p->p_y][p->p_x] != 'E' && p->map[p->p_y][p->p_x] != 'e')
			p->map[p->p_y][p->p_x] = '0';
		p->map[p->p_y][p->p_x - 1] = 'P';
		(p->p_x)--;
		ft_printf("Move : %d\n", (*i)++);
	}
	else if (p->map[p->p_y][p->p_x - 1] == 'E')
	{
		p->map[p->p_y][p->p_x] = '0';
		p->player = 'l';
		(p->p_x)--;
		ft_printf("Move : %d\n", (*i)++);
	}
}

static void	ft_key_s(t_param *p, int *i)
{
	if (p->map[p->p_y + 1][p->p_x] >= '1' && p->map[p->p_y + 1][p->p_x] <= '5'
		&& p->map[p->p_y][p->p_x] == 'E')
		p->player = 'b';
	else if (p->player != 's' && p->map[p->p_y][p->p_x] != 'E')
		p->player = 's';
	if (p->map[p->p_y + 1][p->p_x] == '0' || p->map[p->p_y + 1][p->p_x] == 'C'
		|| p->map[p->p_y + 1][p->p_x] == 'e')
	{
		if (p->player != 's')
			p->player = 's';
		if (p->map[p->p_y + 1][p->p_x] == 'C')
			(p->c)--;
		if (p->map[p->p_y][p->p_x] != 'E' && p->map[p->p_y][p->p_x] != 'e')
			p->map[p->p_y][p->p_x] = '0';
		p->map[p->p_y + 1][p->p_x] = 'P';
		(p->p_y)++;
		ft_printf("Move : %d\n", (*i)++);
	}
	else if (p->map[p->p_y + 1][p->p_x] == 'E')
	{
		p->map[p->p_y][p->p_x] = '0';
		p->player = 'b';
		(p->p_y)++;
		ft_printf("Move : %d\n", (*i)++);
	}
}

static void	ft_key_d(t_param *p, int *i)
{
	if (p->map[p->p_y][p->p_x + 1] >= '1' && p->map[p->p_y][p->p_x + 1] <= '5'
		&& p->map[p->p_y][p->p_x] == 'E')
		p->player = 'r';
	else if (p->player != 'd' && p->map[p->p_y][p->p_x] != 'E')
		p->player = 'd';
	if (p->map[p->p_y][p->p_x + 1] == '0' || p->map[p->p_y][p->p_x + 1] == 'C'
		|| p->map[p->p_y][p->p_x + 1] == 'e')
	{
		if (p->player != 'd')
			p->player = 'd';
		if (p->map[p->p_y][p->p_x + 1] == 'C')
			(p->c)--;
		if (p->map[p->p_y][p->p_x] != 'E' && p->map[p->p_y][p->p_x] != 'e')
			p->map[p->p_y][p->p_x] = '0';
		p->map[p->p_y][p->p_x + 1] = 'P';
		(p->p_x)++;
		ft_printf("Move : %d\n", (*i)++);
	}
	else if (p->map[p->p_y][p->p_x + 1] == 'E')
	{
		p->map[p->p_y][p->p_x] = '0';
		p->player = 'r';
		(p->p_x)++;
		ft_printf("Move : %d\n", (*i)++);
	}
}

void	ft_move(int key, t_param *p)
{
	static int	i;

	if (key == 119)
		ft_key_w(p, &i);
	else if (key == 97)
		ft_key_a(p, &i);
	else if (key == 115)
		ft_key_s(p, &i);
	else if (key == 100)
		ft_key_d(p, &i);
	else
		return ;
	if (p->c == 0 && p->map[p->e_y][p->e_x] == 'E')
		p->map[p->e_y][p->e_x] = 'e';
}
