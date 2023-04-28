/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:32:47 by paugonca          #+#    #+#             */
/*   Updated: 2023/04/28 19:45:32 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	r_rotate(t_list **stack)
{
	t_list	*top;
	t_list	*bot;

	if (!stack || !(*stack)->next)
		return ;
	top = *stack;
	bot = ft_lstlast(*stack);
	*stack = bot->next;
	bot->next = NULL;
	(*stack)->next = top;
}

void	r_rotate_a(t_list **stack_a)
{
	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	r_rotate(stack_a);
	ft_putstr_fd("rra\n", 1);
}

void	r_rotate_b(t_list **stack_b)
{
	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	r_rotate(stack_b);
	ft_putstr_fd("rrb\n", 1);
}

void	r_rotate_ab(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a && *stack_b)
	{
		r_rotate_a(stack_a);
		r_rotate_b(stack_b);
		ft_putstr_fd("rrr\n", 1);
	}
}
