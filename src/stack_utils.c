/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:16:33 by paugonca          #+#    #+#             */
/*   Updated: 2023/04/28 20:49:21 by paugonca         ###   ########.fr       */
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

void	stack_check_pos(t_list **stack_a, t_list **stack_b, int p, int i)
{
	if (p > 2)
	{
		if (i == 1)
			p = 5 - p;
		else
			p = 4 - p;
		while (p != 0)
		{
			r_rotate_a(stack_a);
			p--;
		}
	}
	else
	{
		while (p)
		{
			rotate_a(stack_a);
			p--;
		}
	}
}
