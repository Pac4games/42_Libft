/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:18:40 by paugonca          #+#    #+#             */
/*   Updated: 2022/10/20 13:47:16 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	p;
	size_t	strlen;

	if (!s)
		return (0);
	p = 0;
	strlen = ft_strlen(s);
	if (len > strlen)
		len = strlen + 1;
	res = (char *)malloc(len + 1);
	if (!res)
		return (0);
	while (start < strlen && p < len)
	{
		res[p] = s[start];
		start++;
		p++;
	}
	res[p] = '\0';
	return (res);
}
