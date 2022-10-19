/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:28:41 by paugonca          #+#    #+#             */
/*   Updated: 2022/10/19 13:33:34 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*res;

	res = ft_itoa(n);
	ft_putstr_fd(res, fd);
}

int	main(void)
{
	ft_putnbr_fd(-69420, 1);
	return (0);
}
