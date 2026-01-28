/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julauren <julauren@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 06:04:04 by julauren          #+#    #+#             */
/*   Updated: 2026/01/28 07:17:04 by julauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	ft_str_chr(const char *str, int c)
{
	int		i;
	int		len;
	char	*tmp;

	i = 0;
	len = ft_strlen(str);
	tmp = (char *)str;
	while (i <= len)
	{
		if (tmp[i] == (char )c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_tabchr(char **tab, int c, int *i, int *j)
{
	*i = 0;
	while (tab[*i])
	{
		*j = ft_str_chr(tab[*i], c);
		if (*j >= 0)
			return (1);
		(*i)++;
	}
	return (0);
}
