/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_management.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 13:43:09 by julauren          #+#    #+#             */
/*   Updated: 2026/01/25 14:34:11 by julauren         ###   ########.fr       */
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
	int	err;

	err = 0;
	if (ac != 2)
	{
		ft_putstr_fd("Error\nInvalid number of argumemts\n", 2);
		err++;
	}
	else if (ft_ext(av[1]))
	{
		ft_putstr_fd("Error\nInvalid argumemt\n", 2);
		err++;
	}
	if (err)
		exit(EXIT_FAILURE);
}

void	ft_error_characters(char **map_file)
{
	free(*map_file);
	ft_putstr_fd("Error\nInvalid map\n", 2);
	exit(EXIT_FAILURE);
}
