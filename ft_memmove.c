/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:53:52 by paugonca          #+#    #+#             */
/*   Updated: 2022/10/14 12:18:47 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;

	a = (char *)src;
	b = dst;
	if (a < b)
	{
		while (len > 0)
		{
			b[len] = a[len];
			len--;
		}
	}
	else
		ft_memcpy(b, a, len);
	return (dst);
}
