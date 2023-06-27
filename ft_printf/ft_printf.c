/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:17:40 by acarmona          #+#    #+#             */
/*   Updated: 2023/06/27 19:06:20 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_check(int fun, va_list tmp)
{
	int	i;

	i = 0;
	if (fun == '%')
		c = c + write(1, "%", 1);
	if (fun == 'd')
		c = c + ft_dec(va_arg(tmp. int), fun);

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
		if (str[i] != '%')
			c = c + write(1, str + i, 1);
		else
			c = c + ft_printf_check(s[i = i + 1], tmp);
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
