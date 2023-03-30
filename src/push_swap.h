/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:31:06 by paugonca          #+#    #+#             */
/*   Updated: 2023/03/30 16:10:40 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <unistd.h>
# include <stdio.h>

# define TRUE 1
# define FALSE 0

//check_args.c
int	check_nums(int ac, char **av);
int	check_limit(int ac, char **av);
int	check_dups(int ac, char **av);
int	check_args(int ac, char **av);

#endif
