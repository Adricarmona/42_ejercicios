/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:17:34 by acarmona          #+#    #+#             */
/*   Updated: 2023/07/17 18:02:44 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_printf_check(int fun, va_list tmp);
int			ft_printf(const char *str, ...);
static int	num_count(long i);
char		*ft_dec(int n);
int			ft_stri(char *str);
int			ft_uni(unsigned int n);
int			ft_exa(size_t n, int c);
int			ft_putchar(char c);

#endif
