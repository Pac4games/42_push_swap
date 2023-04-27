/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:29:14 by paugonca          #+#    #+#             */
/*   Updated: 2023/04/27 17:48:48 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size;

	if (!check_args(ac, av) || ac < 3)
	{
		ft_putstr_fd("Error\n", 2);
		return (EXIT_FAILURE);
	}
	stack_a = stack_putval(ac, av);
	stack_b = NULL;
	size = ft_lstsize(stack_a);
	sort_start(&stack_a, &stack_b, size);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (EXIT_SUCCESS);
}
