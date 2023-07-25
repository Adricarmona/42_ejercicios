/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:17:34 by acarmona          #+#    #+#             */
/*   Updated: 2023/07/17 18:51:16 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int			ft_printf_check(int fun, va_list tmp);
int			ft_printf(const char *str, ...);
int			ft_dec(long i);
int			ft_stri(char *str);
int			ft_uni(unsigned int n);
int			ft_exa(size_t n, int c);
int			ft_putchar(char c);

#endif
