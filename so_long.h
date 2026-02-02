/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:02:03 by julauren          #+#    #+#             */
/*   Updated: 2026/02/02 17:15:01 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx-linux/mlx.h"
# include "src/Libft/libft.h"
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# ifndef BUFFER_SIZE_SL
#  define BUFFER_SIZE_SL 50

# endif

typedef struct s_ch
{
	int	c;	//collectible
	int	e;	//exit
	int	p;	//player
	int	es;	//empty space
	int	o;	//others than '0', '1', 'C', 'P' & 'E'
}	t_ch;

typedef struct s_data
{
	int		x;	//tab indice
	int		y;	//tab indice
	int		w;	//width of screen in px
	int		h;	//height of screen in px
	char	*cor_1;
	char	*cor_2;
	char	*cor_3;
	char	*cor_4;
	char	*top_1;
	char	*top_2;
	char	*right_1;
	char	*right_2;
	char	*bot_1;
	char	*bot_2;
	char	*left_1;
	char	*left_2;
	char	*wall;
	char	*ground;
	char	*tree_1;
	char	*tree_2;
	char	*tree_3;
	char	*tree_4;
	char	*p_1;
	char	*p_2;
	char	*p_3;
	char	*p_4;
	char	*e_c;
	char	*e_o;
	char	*sapp;
}	t_data;

typedef struct s_asset
{
	int		w;	//width of each image = 32 px
	int		h;	//height of each image = 32 px
	void	*cor_1;
	void	*cor_2;
	void	*cor_3;
	void	*cor_4;
	void	*top_1;
	void	*top_2;
	void	*right_1;
	void	*right_2;
	void	*bot_1;
	void	*bot_2;
	void	*left_1;
	void	*left_2;
	void	*wall;
	void	*ground;
	void	*tree_1;
	void	*tree_2;
	void	*tree_3;
	void	*tree_4;
	void	*p_1;
	void	*p_2;
	void	*p_3;
	void	*p_4;
	void	*e_c;
	void	*e_o;
	void	*sapp;
}	t_asset;

typedef struct s_param
{
	int		x;	//tab indice
	int		y;	//tab indice
	void	*mlx;
	void	*win;
	char	**map;
	t_asset	*a;
}	t_param;

/*================MAP================*/

char	**ft_create_map(char *str);
void	ft_pathfinding(char **map);
char	**ft_tabdup(char **tab);
int		ft_tabchr(char **tab, int c, int *i, int *j);
void	ft_free_tab(char **tab);
void	ft_display(char **map);
void	ft_exit_so_long(t_param *p, int exit_code);
void	ft_init_map(t_param *p, t_data *d);
void	ft_init_assets(t_param *p, t_data *d);
void	ft_map(t_param *p, int w, int h);

/*===============ERROR===============*/

void	ft_error_args(int ac, char **av);
void	ft_error_characters(char **map_file);
void	ft_error_map(char **map, int error_code);
void	ft_error_path(char **map, char **map_dup);

#endif
