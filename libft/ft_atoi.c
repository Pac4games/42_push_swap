/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:07:52 by paugonca          #+#    #+#             */
/*   Updated: 2023/02/07 12:35:20 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Adaptaded version for the check_args function (regarding the int limit)
long int	ft_atoi(const char *str)
{
	long int	res;
	int			sign;
	int			p;

	sign = 1;
	res = 0;
	p = 0;
	while ((str[p] >= 9 && str[p] <= 13) || str[p] == 32)
		p++;
	if (str[p] == '+' || str[p] == '-')
	{
		if (str[p] == '-')
			sign *= -1;
		p++;
	}
	while (str[p] >= 48 && str[p] <= 57)
		res = (res * 10) + (str[p++] - 48);
	return (sign * res);
}
