/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:17:40 by acarmona          #+#    #+#             */
/*   Updated: 2023/07/12 22:14:38 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_check(int fun, va_list tmp)
{
	int	i;

	i = 0;
	if (fun == '%')
		i = i + write(1, '%', 1);
	if (fun == 'c')
		i = i + write(1, "tmp", 1);
	if (fun == 'd' || fun == 'i')
		i = i + ft_dec(va_arg(tmp, int ));		
	if (fun == 's')
		i = i + ft_stri(va_arg(tmp, char *));
	if (fun == 'p')
		i = i + ft_stri(va_arg(tmp, unsigned long));
	if (fun == 'u')
		i = i + ft_uni(va_arg(tmp, unsigned int ));
	if (fun == 'x')
		i = i + ft_;
	return(i);
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
			c = c + ft_printf_check(str[i = i + 1], tmp);
		else
			c = c + write(1, str + i, 1);
		i = i + 1;
	}
	va_end(tmp);
	return (c);
}

int	main()
{
	ft_printf("Hola mano, %c", 'g');
	return (0);
}
