/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:31:06 by paugonca          #+#    #+#             */
/*   Updated: 2023/04/28 20:39:51 by paugonca         ###   ########.fr       */
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

//check_args.c
int			check_nums(int ac, char **av);
int			check_limit(int ac, char **av);
int			check_dups(int ac, char **av);
int			check_args(int ac, char **av);
//extra_utils.c
long long	ft_atoll(const char *num);
//stack_utils.c
t_list		*stack_putval(int ac, char **av);
t_list		*stack_create(int num);
//sort_utils.c
void		sort_start(t_list **stack_a, t_list **stack_b, int size);
//Moves
void		swap_a(t_list **stack_a);
void		swap_b(t_list **stack_b);
void		swap_ab(t_list **stack_a, t_list **stack_b);
void		rotate_a(t_list **stack_a);
void		rotate_b(t_list **stack_b);
void		rotate_ab(t_list **stack_a, t_list **stack_b);
void		r_rotate_a(t_list **stack_a);
void		r_rotate_b(t_list **stack_b);
void		r_rotate_ab(t_list **stack_a, t_list **stack_b);
//Num utils
int			get_max_int(t_list *stack);
int			get_min_int(t_list *stack);

#endif
