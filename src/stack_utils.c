/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:16:33 by paugonca          #+#    #+#             */
/*   Updated: 2023/04/27 15:38:26 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*stack_create(int num)
{
	t_list	*res;

	res = malloc(sizeof(t_list));
	if (!res)
		return (NULL);
	res->content = num;
	res->index = -1;
	res->next = NULL;
	return (res);
}

t_list	*stack_putval(int ac, char **av)
{
	t_list	*res;
	long	num;
	int		p;

	res = NULL;
	num = 0;
	p = 1;
	while (p < ac)
	{
		num = ft_atoll(av[p]);
		if (p == 1)
			res = stack_create((int)num);
		else
			ft_lstadd_back(&res, stack_create((int)num));
		p++;
	}
	return (res);
}
