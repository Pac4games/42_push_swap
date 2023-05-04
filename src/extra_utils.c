/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:45:57 by paugonca          #+#    #+#             */
/*   Updated: 2023/05/04 14:58:15 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Same thing as ft_atoi, but for long long ints.
long long	ft_atoll(const char *num)
{
	int			i;
	int			sig;
	long long	res;

	i = 0;
	sig = 1;
	res = 0;
	while ((num[i] == 32) || (num[i] == '\n') || (num[i] == '\t') || \
			(num[i] == '\v') || (num[i] == '\f') || (num[i] == '\r'))
			i++;
	if ((num[i] == '+') || (num[i] == '-'))
	{
		if (num[i] == '-')
			sig = -1;
		i++;
	}
	while (num[i] >= '0' && num[i] <= '9')
	{
		res = (res * 10) + (num[i] - '0');
		i++;
	}
	return (res * sig);
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
	while (current)
	{
		printf("%d\n", current->content);
		current = current->next;
	}
}
