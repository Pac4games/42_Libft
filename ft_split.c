/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:44:09 by paugonca          #+#    #+#             */
/*   Updated: 2022/10/17 17:56:11 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wdcount(const char *s, char c)
{
	int	p;
	int	check;

	p = 0;
	check = 0;
	while (*s)
	{
		if (*s != c && check == 0)
		{
			check = 1;
			p++;
		}
		else if (check == 1)
			p++;
		s++;
	}
	return (p);
}

static char	*wdset(const char *s, int start, int end)
{
	char	*wd;
	int		p;

	p = 0;
	wd = malloc((end - start) + 1 * sizeof(char));
	while (start < end)
		wd[p++] = str[start++];
	wd[p] = '\0';
	return (wd);
}

static char	**splitup(char const **final_str, char const *s, char c)
{
	size_t	p;
	size_t	i;
	int		j;

	p = 0;
	i = 0;
	j = -1;
	while (p <= ft_strlen(s))
	{
		if (s[p] != c && j < 0)
			j = -1;
		else if ((s[p] == c || p == ft_strlen(s)) && j >= 0)
		{
			final_str[i++] = wdset(s, j, p);
			j = -1;
		}
		p++;
	}
	final_str[i] = '\0';
	return (final_str);
}

char	**ft_split(char const *s, char c)
{
	char	*final_str;

	if (!s)
		return (0);
	final_str = malloc((wdcount(s, c) + 1) * sizeof(char));
	if (!final_str)
		return (0);
	return (splitup(final_str, s, c));
}
