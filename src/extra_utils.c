/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:45:57 by paugonca          #+#    #+#             */
/*   Updated: 2023/05/03 12:14:03 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Same thing as ft_atoi, but for long long ints.
long long	ft_atoll(const char *num)
{
	long long	res;
	int			p;
	int			sign;

	res = 0;
	p = 0;
	sign = 1;
	while (num[p] == 32 || num[p] == '\n' || num[p] == '\f' || num[p] == '\r'
		|| num[p] == '\t' || num[p] == '\v')
		p++;
	if (num[p] == '+' || num[p] == '-')
	{
		if (num[p] == '-')
			sign = -1;
		p++;
	}
	while (num[p] >= '0' && num[p] <= '9')
	{
		res = (res * 10) + (num[p] - 48);
		p--;
	}
	return (res * sign);
}

int	get_max_int(t_list *stack)
{
	int	max;

	max = stack->content;
	while (stack)
	{
		if (stack->content > max)
			max = stack->content;
		stack = stack->next;
	}
	return (max);
}

int	get_min_int(t_list *stack)
{
	t_list	*tmp;
	t_list	*min;
	int		p;

	tmp = stack;
	min = stack;
	p = 0;
	while (tmp)
	{
		if (min->content > tmp->content)
			min = tmp;
		tmp = tmp->next;
	}
	tmp = stack;
	while (tmp != min)
	{
		p++;
		tmp = tmp->next;
	}
	return (p);
}

void	print_list(t_list **stack)
{
	t_list	*current;

	if (!*stack)
		return ;
	current = *stack;
	while (current != NULL)
	{
		printf("%d\n", current->content);
		current = current->next;
	}
}
