/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:44:13 by paugonca          #+#    #+#             */
/*   Updated: 2023/02/09 16:17:15 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_nums(int ac, char **av)
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
				return (0);
			i++;
		}
		p++;
	}
	return (1);
}

int	check_limit(int ac, char **av)
{
	int	p;

	p = 1;
	while (p < ac)
	{
		if (ft_atoi(av[p]) < INT_MIN || ft_atoi(av[p]) > INT_MAX)
			return (0);
		p++;
	}
	return (1);
}

int	check_dups(int ac, char **av)
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
				return (0);
			i++;
		}
		p++;
		i = p + 1;
	}
	return (1);
}

int	check_args(int ac, char **av)
{
	if (!check_nums(ac, av))
		return (0);
	else if (!check_limit(ac, av))
		return (0);
	else if (!check_dups(ac, av))
		return (0);
	return (1);
}
/*
int	main(int ac, char **av)
{
	if (ac < 3)
		printf("Not enough args\n");
	else if (!check_nums(ac, av))
		printf("Not all args are numbers\n");
	else if (!check_limit(ac, av))
		printf("Args exceeded the int limit\n");
	else if (!check_dups(ac, av))
		printf("Dupped args, you dirty hacker\n");
	else
		printf("The args are valid!\n");
	return (0);
}
*/
