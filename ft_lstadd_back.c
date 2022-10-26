/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:59:24 by paugonca          #+#    #+#             */
/*   Updated: 2022/10/26 18:43:38 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*hold;

	if (!new || !lst)
		return ;
	else if (!*lst)
	{
		*lst = new;
		return ;
	}
	hold = ft_lstlast(*lst);
	hold->next = new;
}
