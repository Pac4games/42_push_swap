/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:03:25 by paugonca          #+#    #+#             */
/*   Updated: 2023/05/03 16:33:47 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list *stack)
{
	int	hold;

	if (!stack || !(stack->next))
		return ;
	hold = stack->content;
	stack->content = stack->next->content;
	stack->next->content = hold;
}

void	swap_a(t_list **stack_a)
{
	swap(*stack_a);
	ft_putstr_fd("sa\n", 1);
}

void	swap_b(t_list **stack_b)
{
	swap(*stack_b);
	ft_putstr_fd("sb\n", 1);
}

void	swap_ab(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a && *stack_b)
	{
		swap(*stack_a);
		swap(*stack_b);
		ft_putstr_fd("ss\n", 1);
	}
}
