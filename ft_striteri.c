/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:46:07 by paugonca          #+#    #+#             */
/*   Updated: 2022/10/19 12:53:33 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char))
{
	int	p;

	p = 0;
	if (s && f)
	{
		while (s[p])
		{
			f(i, &s[p]);
			p++;
		}
	}
}
