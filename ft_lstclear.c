/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:50:29 by paugonca          #+#    #+#             */
/*   Updated: 2022/10/27 12:36:53 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*hold;
	
	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		hold = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = hold;
	}
	lst = 0;
}
