/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:40:29 by paugonca          #+#    #+#             */
/*   Updated: 2023/05/04 15:52:47 by paugonca         ###   ########.fr       */
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

	printf("stack_a size: %d\n", size);
	if (size == 5)
	{
		tmp = *stack_a;
		min = get_min_int(tmp);
		stack_check_pos(stack_a, stack_b, min, 1);
	}
	tmp = *stack_a;
	min = get_min_int(tmp);
	stack_check_pos(stack_a, stack_b, min, 2);
	if (!is_sorted(stack_a))
		sort_3(stack_a);
	while (*stack_b)
		push_a(stack_a, stack_b);
}

static void	sort_5plus(t_list **stack_a, t_list **stack_b, size_t size)
{
	size_t	p;
	size_t	i;

	stack_get_index(stack_a);
	p = 0;
	while (!is_sorted(stack_a))
	{
		i = 0;
		while (i < size)
		{
			if ((*stack_a)->index >> p & 1)
				rotate_a(stack_a);
			else
				push_b(stack_a, stack_b);
			i++;
		}
		while (*stack_b)
			push_a(stack_a, stack_b);
		p++;
	}
}

void	sort_start(t_list **stack_a, t_list **stack_b, size_t size)
{
	if (is_sorted(stack_a))
		return ;
	if (size == 2)
		swap_a(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else if (size == 4 || size == 5)
		sort_4t5(stack_a, stack_b, size);
	else if (size > 5)
		sort_5plus(stack_a, stack_b, size);
}
