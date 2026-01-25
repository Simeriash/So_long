/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:02:03 by julauren          #+#    #+#             */
/*   Updated: 2026/01/25 15:05:03 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx-linux/mlx.h"
# include "src/libft/libft.h"
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
	int	others;
};

void	ft_error_args(int ac, char **av);
char	**ft_create_map(char *str);
void	ft_error_characters(char **map_file);

#endif
