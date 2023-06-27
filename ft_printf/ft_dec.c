/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:20:03 by acarmona          #+#    #+#             */
/*   Updated: 2023/06/27 19:29:57 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_count(long i)
{
	size_t	c;

	c = 0;
	if (i <= 0)
		c++;
	while (i != 0)
	{
		i /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	l;
	long	i;

	i = n;
	l = num_count(i);
	s = (char *) malloc (sizeof (char) * (l + 1));
	if (!s)
		return (0);
	s[l--] = '\0';
	if (i == 0)
		s[0] = '0';
	if (i < 0)
	{
		s[0] = '-';
		i *= -1;
	}
	while (i > 0)
	{
		s[l] = (i % 10) + '0';
		i /= 10;
		l--;
	}
	return (s);
}
