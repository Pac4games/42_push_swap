/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:50:29 by paugonca          #+#    #+#             */
/*   Updated: 2023/04/27 15:55:34 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*hold;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		hold = (*lst)->next;
		ft_lstdelone(*lst);
		*lst = hold;
	}
	lst = 0;
}
