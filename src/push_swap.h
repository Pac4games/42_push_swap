/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:31:06 by paugonca          #+#    #+#             */
/*   Updated: 2023/05/03 12:14:42 by paugonca         ###   ########.fr       */
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
int			check_args(int ac, char **av);
//extra_utils.c
long long	ft_atoll(const char *num);
void		print_list(t_list **stack);
//stack_utils.c
t_list		*stack_putval(int ac, char **av);
void		stack_check_pos(t_list **stack_a, t_list **stack_b, int p, int i);
//sort_utils.c
void		sort_start(t_list **stack_a, t_list **stack_b, size_t size);
//Moves
void		push_a(t_list **stack_a, t_list **stack_b);
void		push_b(t_list **stack_a, t_list **stack_b);
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
