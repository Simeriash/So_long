/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 04:51:19 by julauren          #+#    #+#             */
/*   Updated: 2026/02/01 17:25:19 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_free(char **tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static void	ft_copy(char **tab, char **tab_dup)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			tab_dup[i][j] = tab[i][j];
			j++;
		}
		tab_dup[i][j] = '\0';
		i++;
	}
	tab_dup[i] = NULL;
}

char	**ft_tabdup(char **tab)
{
	int		line;
	int		i;
	char	**tab_dup;

	line = 0;
	while (tab[line])
		line++;
	tab_dup = malloc(sizeof(char *) * (line + 1));
	if (!tab_dup)
		return (NULL);
	i = 0;
	while (i < line)
	{
		tab_dup[i] = malloc(sizeof(char) * (ft_strlen(tab[i]) + 1));
		if (!tab_dup[i])
		{
			ft_free(tab_dup, i);
			return (NULL);
		}
		i++;
	}
	ft_copy(tab, tab_dup);
	return (tab_dup);
}
