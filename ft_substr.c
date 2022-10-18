/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:18:40 by paugonca          #+#    #+#             */
/*   Updated: 2022/10/14 21:24:39 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char const *s, unsigned int p)
{	
	unsigned int	i;

	i = 0;
	while (s[p])
	{
		i++;
		p++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	p;
	unsigned int	i;

	p = start;
	i = count(s, p);
	if (len <= i - 1)
		res = (char *)malloc(len + 1 * sizeof(char));
	else
		res = (char *)malloc(i * sizeof(char));
	if (!res)
		return (0);
	i = 0;
	while (s[p] && i < len)
	{
		res[i] = s[p];
		i++;
		p++;
	}
	if (!res[i])
		res[i] = '\0';
	return (res);
}
