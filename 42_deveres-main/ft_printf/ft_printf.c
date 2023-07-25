/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:17:40 by acarmona          #+#    #+#             */
/*   Updated: 2023/07/17 18:58:31 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_check(int fun, va_list tmp)
{
	int	i;

	i = 0;
	if (fun == '%')
		i = i + write(1, "%", 1);
	if (fun == 'c')
		i = i + ft_putchar(va_arg(tmp, int));
	if (fun == 'd' || fun == 'i')
		i = i + ft_dec(va_arg(tmp, int ));
	if (fun == 's')
		i = i + ft_stri(va_arg(tmp, char *));
	if (fun == 'p')
		i = i + ft_stri(va_arg(tmp, char *));
	if (fun == 'u')
		i = i + ft_uni(va_arg(tmp, unsigned int ));
	if (fun == 'x')
		i = i + ft_exa(va_arg(tmp, unsigned long), 0);
	if (fun == 'X')
		i = i + ft_exa(va_arg(tmp, unsigned long), 1);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		c;
	va_list	tmp;

	i = 0;
	c = 0;
	va_start(tmp, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			c = c + ft_printf_check(str[++i], tmp);
		else
			c = c + write(1, str + i, 1);
		i = i + 1;
	}
	va_end(tmp);
	return (c);
}
