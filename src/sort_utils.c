/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:40:29 by paugonca          #+#    #+#             */
/*   Updated: 2023/04/28 20:27:31 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sorted(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (FALSE);
		tmp = tmp->next;
	}
	return (TRUE);
}

static void	sort_3(t_list **stack)
{
	int	max;

	if (is_sorted(stack))
		return ;
	max = get_max_int(*stack); 
	if ((*stack)->content == max)
		rotate_a(stack);
	else if ((*stack)->next->content == max)
		r_rotate_a(stack);
	if ((*stack)->content > (*stack)->next->content)
		swap_a(stack);
}

static void	sort_4t5(t_list **stack_a, t_list **stack_b, int size)
{
	t_list	*tmp;
	int		min;

	if (size == 5)
	{
		tmp = *stack_a;
	}
}

void	sort_start(t_list **stack_a, t_list **stack_b, int size)
{
	if (is_sorted(stack_a))
		return ;
	if (size == 2)
	{
		swap_a(stack_a);
		is_sorted(stack_a);
	}
	else if (size == 3)
	{
		sort_3(stack_a);
		is_sorted(stack_a);
	}
	else if (size == 4 || size == 5)
	{
		
	}
}

