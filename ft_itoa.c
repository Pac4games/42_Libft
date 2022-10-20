/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 23:21:16 by paugonca          #+#    #+#             */
/*   Updated: 2022/10/20 13:20:07 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*convert(size_t p, long num, int aux, char *res)
{
	if (num == 0)
		res[0] = '0';
	p--;
	while (num > 0)
	{
		res[p + aux] = num % 10 + 48;
		num /= 10;
		p--;
	}
	res[p] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	num;
	size_t	p;
	int		aux;

	p = 0;
	aux = 0;
	num = (long)n;
	if (n == 0)
		p++;
	while (n)
	{
		n /= 10;
		p++;
	}
	res = (char *)malloc(p + 1);
	if (!res)
		return (0);
	if (num < 0)
	{
		res[0] = '-';
		num *= -1;
		aux++;
	}
	return (convert(p, num, aux, res));
}
