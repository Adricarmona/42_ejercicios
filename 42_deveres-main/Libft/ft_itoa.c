/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:08:39 by acarmona          #+#    #+#             */
/*   Updated: 2023/06/06 17:08:39 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
