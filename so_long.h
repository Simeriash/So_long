/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:02:03 by julauren          #+#    #+#             */
/*   Updated: 2026/01/28 12:39:32 by julauren         ###   ########.fr       */
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

/*================MAP================*/

char	**ft_create_map(char *str);
void	ft_pathfinding(char **map);
char	**ft_tabdup(char **tab);
int		ft_tabchr(char **tab, int c, int *i, int *j);
void	ft_free_tab(char **tab);
void	ft_display(char **map);

/*===============ERROR===============*/

void	ft_error_args(int ac, char **av);
void	ft_error_characters(char **map_file);
void	ft_error_map(char **map, int error_code);
void	ft_error_path(char **map, char **map_dup);

#endif
