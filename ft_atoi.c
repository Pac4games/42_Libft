/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:07:52 by paugonca          #+#    #+#             */
/*   Updated: 2022/10/12 00:05:11 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	skip_spaces(const char *str)
{
	int	p;

	p = 0;
	while (str[p] == 32 || (str[p] >= 9 && str[p] <= 13))
		p++;
	return (p);
}

int	ft_atoi(const char *str)
{
	int	p;
	int	res;
	int	sign;

	p = skip_spaces(str);
	res = 0;
	sign = 1;
	if (str[p] == '-')
	{
		sign = -1;
		p++;
	}
	else if (str[p] == '+')
		p++;
	if (str[p] && str[p] >= '0' && str[p] <= '9')
	{
		while (str[p] && str[p] >= '0' && str[p] <= '9')
		{
			res *= 10;
			res += str[p] - 48;
			p++;
		}
		return (res * sign);
	}
	return (0);
}
