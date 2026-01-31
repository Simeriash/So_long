/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:02:03 by julauren          #+#    #+#             */
/*   Updated: 2026/01/31 09:16:59 by julauren         ###   ########.fr       */
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

typedef struct s_ch	t_ch;
struct	s_ch
{
	int	c;
	int	e;
	int	p;
	int	es;
	int	o;
};

typedef struct s_data	t_data;
struct	s_data
{
	int		x;
	int		y;
	int		width;
	int		height;
	char	*corner_1;
	char	*corner_2;
	char	*corner_3;
	char	*corner_4;
	char	*border_top_1;
	char	*border_top_2;
	char	*border_right_1;
	char	*border_right_2;
	char	*border_botttom_1;
	char	*border_botttom_2;
	char	*border_left_1;
	char	*border_left_2;
	char	*wall;
	char	*ground;
	char	*tree_1;
	char	*tree_2;
	char	*tree_3;
	char	*tree_4;
	char	*player_1;
	char	*player_2;
	char	*player_3;
	char	*player_4;
	char	*exit_close;
	char	*exit_open;
	char	*sapphire;
};

typedef struct s_asset	t_asset;
struct	s_asset
{
	void	*corner_1;
	void	*corner_2;
	void	*corner_3;
	void	*corner_4;
	void	*border_top_1;
	void	*border_top_2;
	void	*border_right_1;
	void	*border_right_2;
	void	*border_botttom_1;
	void	*border_botttom_2;
	void	*border_left_1;
	void	*border_left_2;
	void	*wall;
	void	*ground;
	void	*tree_1;
	void	*tree_2;
	void	*tree_3;
	void	*tree_4;
	void	*player_1;
	void	*player_2;
	void	*player_3;
	void	*player_4;
	void	*exit_close;
	void	*exit_open;
	void	*sapphire;
};

typedef struct s_param	t_param;
struct	s_param
{
	void	*mlx;
	void	*win;
	char	**map;
};

/*================MAP================*/

char	**ft_create_map(char *str);
void	ft_pathfinding(char **map);
char	**ft_tabdup(char **tab);
int		ft_tabchr(char **tab, int c, int *i, int *j);
void	ft_free_tab(char **tab);
void	ft_display(char **map);
void	ft_init_map(t_data *data, char **map);

/*===============ERROR===============*/

void	ft_error_args(int ac, char **av);
void	ft_error_characters(char **map_file);
void	ft_error_map(char **map, int error_code);
void	ft_error_path(char **map, char **map_dup);

#endif
