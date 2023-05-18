/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:39:55 by paugonca          #+#    #+#             */
/*   Updated: 2023/05/18 08:56:08 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **stack)
{
	t_list	*top;
	t_list	*bot;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	top = *stack;
	*stack = (*stack)->next;
	bot = ft_lstlast(*stack);
	top->next = NULL;
	bot->next = top;
}

void	rotate_a(t_list **stack_a)
{
	rotate(stack_a);
	ft_putstr_fd("ra\n", 1);
}

void	rotate_b(t_list **stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("rb\n", 1);
}

void	rotate_ab(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a && *stack_b)
	{
		rotate(stack_a);
		rotate(stack_b);
		ft_putstr_fd("rr\n", 1);
	}
}
