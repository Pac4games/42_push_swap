/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:40:29 by paugonca          #+#    #+#             */
/*   Updated: 2023/04/28 16:02:40 by paugonca         ###   ########.fr       */
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
		
	}

}

