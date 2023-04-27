/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:31:06 by paugonca          #+#    #+#             */
/*   Updated: 2023/04/27 15:20:08 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define TRUE 1
# define FALSE 0

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_stack;

//check_args.c
int			check_nums(int ac, char **av);
int			check_limit(int ac, char **av);
int			check_dups(int ac, char **av);
int			check_args(int ac, char **av);
//extra_utils.c
long long	ft_atoll(const char *num);
//stack_utils.c
t_stack		*stack_putval(int ac, char **av);
t_stack		*stack_create(int num);

#endif
