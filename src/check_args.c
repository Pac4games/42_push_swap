/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:44:13 by paugonca          #+#    #+#             */
/*   Updated: 2023/05/04 12:12:37 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_nums(int ac, char **av)
{
	int	p;
	int	i;

	p = 1;
	while (p < ac)
	{
		i = 0;
		if (av[p][i] == '-' || av[p][i] == '+')
			i++;
		while (av[p][i])
		{
			if (!ft_isdigit(av[p][i]))
				return (FALSE);
			i++;
		}
		p++;
	}
	return (TRUE);
}

static int	check_limit(int ac, char **av)
{
	int	p;

	p = 1;
	while (p < ac)
	{
		if (ft_atoi(av[p]) < INT_MIN || ft_atoi(av[p]) > INT_MAX)
			return (FALSE);
		p++;
	}
	return (TRUE);
}

static int	check_dups(int ac, char **av)
{
	int	p;
	int	i;

	p = 1;
	i = 2;
	while (p < ac - 1)
	{
		while (i < ac)
		{
			if (ft_atoi(av[p]) == ft_atoi(av[i]))
				return (FALSE);
			i++;
		}
		p++;
		i = p + 1;
	}
	return (TRUE);
}

int	check_args(int ac, char **av)
{
	if (!check_nums(ac, av))
		return (FALSE);
	else if (!check_limit(ac, av))
		return (FALSE);
	else if (!check_dups(ac, av))
		return (FALSE);
	return (TRUE);
}
