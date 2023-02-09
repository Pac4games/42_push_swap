/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:29:14 by paugonca          #+#    #+#             */
/*   Updated: 2023/02/09 14:31:01 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	if (ac < 3)
		return (0);
	else if (!check_args(ac, av))
	{
		ft_printf("Error\n");
		return (0);
	}
	return (0);
}
