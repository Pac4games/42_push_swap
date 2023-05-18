/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:16:33 by paugonca          #+#    #+#             */
/*   Updated: 2023/05/18 08:56:31 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*stack_create(int num)
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

static t_list	*get_next_min(t_list **stack)
{
	t_list	*tmp;
	t_list	*res;
	int		is_min;

	tmp = *stack;
	res = NULL;
	is_min = 0;
	if (tmp)
	{
		while (tmp)
		{
			if (tmp->index == -1 && (!is_min || (tmp->content < res->content)))
			{
				res = tmp;
				is_min = TRUE;
			}
			tmp = tmp->next;
		}
	}
	return (res);
}

void	stack_get_index(t_list **stack)
{
	t_list	*tmp;
	int		p;

	tmp = get_next_min(stack);
	p = 0;
	while (tmp)
	{
		tmp->index = p++;
		tmp = get_next_min(stack);
	}
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
	push_b(stack_a, stack_b);
}
