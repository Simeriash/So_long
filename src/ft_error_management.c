/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_management.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 13:43:09 by julauren          #+#    #+#             */
/*   Updated: 2026/01/28 07:56:51 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	ft_ext(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	if (len < 5)
		return (1);
	i = len - 4;
	if (str[i++] != '.')
		return (1);
	if (str[i++] != 'b')
		return (1);
	if (str[i++] != 'e')
		return (1);
	if (str[i] != 'r')
		return (1);
	return (0);
}

void	ft_error_args(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putstr_fd("Error\nInvalid number of argumemts\n", 2);
		exit(EXIT_FAILURE);
	}
	else if (ft_ext(av[1]))
	{
		ft_putstr_fd("Error\nInvalid argumemt\n", 2);
		exit(EXIT_FAILURE);
	}
}

void	ft_error_characters(char **map_file)
{
	free(*map_file);
	ft_putstr_fd("Error\nInvalid map\n", 2);
	exit(EXIT_FAILURE);
}

void	ft_error_map(char **map, int error_code)
{
	ft_free_tab(map);
	if (error_code == 0)
		ft_putstr_fd("Error\nNon-rectangular map\n", 2);
	if (error_code == 1)
		ft_putstr_fd("Error\nInvalid size of map\n", 2);
	if (error_code == 2)
		ft_putstr_fd("Error\nInvalid map\n", 2);
	exit(EXIT_FAILURE);
}

void	ft_error_path(char **map, char **map_dup)
{
	int	i;

	i = 0;
	while (map[i])
	{
		free(map[i]);
		free(map_dup[i]);
		i++;
	}
	free(map);
	free(map_dup);
	ft_putstr_fd("Error\nPath not found\n", 2);
	exit(EXIT_FAILURE);
}
