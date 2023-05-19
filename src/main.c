/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:29:14 by paugonca          #+#    #+#             */
/*   Updated: 2023/05/19 16:27:16 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac < 2)
		return (EXIT_FAILURE);
	else if (!check_args(ac, av))
	{
		ft_putstr_fd("Error\n", 2);
		return (EXIT_FAILURE);
	}
	stack_a = stack_putval(ac, av);
	stack_b = NULL;
	sort_start(&stack_a, &stack_b, ft_lstsize(stack_a));
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (EXIT_SUCCESS);
}
