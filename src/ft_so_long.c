/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:31:15 by julauren          #+#    #+#             */
/*   Updated: 2026/02/02 11:10:50 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	main(int ac, char **av)
{
	char	**map;

	ft_error_args(ac, av);
	map = ft_create_map(av[1]);
	ft_pathfinding(map);
	ft_display(map);
}
