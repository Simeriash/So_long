/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 10:31:15 by julauren          #+#    #+#             */
/*   Updated: 2026/01/24 12:45:22 by julauren         ###   ########.fr       */
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

static void	ft_error_args(int ac, char **av)
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

int	main(int ac, char **av)
{
	char	**map;

	ft_error_args(ac, av);
	map = ft_create_map(av[1]);
}
