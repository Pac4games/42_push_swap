/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paugonca <paugonca@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:38:44 by paugonca          #+#    #+#             */
/*   Updated: 2022/12/05 13:01:14 by paugonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c, int *res);
void	ft_putstr(char *str, int *res);
size_t	ft_strlen(const char *s);
void	ft_putnbr_base(int n, char *base, int *res);
char	*ft_itoa(int n);

#endif
