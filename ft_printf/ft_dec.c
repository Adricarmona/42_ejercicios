12º/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:20:03 by acarmona          #+#    #+#             */
/*   Updated: 2023/07/03 14:32:22 by acarmona         ###   ########.fr       */
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
		i = i / 10;
		c++;
	}
	return (c);
}

char	*ft_dec(int n)
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
		i =i * -1;
	}
	while (i > 0)
	{
		s[l] = (i % 10) + '0';
		i = i / 10;
		l--;
	}
	return (s);
}

int	ft_stri(char *str)
{
	int	i;

	i = 0;
	if (str != '\0')
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
		i++;
	write(1, str, i);
	return (i);
}

int	ft_uni(unsigned int n)
{
	char	*s;
	int		c;

	s = ft_dec(n);
	c = ft_stri(s);
	free(s);
	return (c);
}

int	ft_exa(size_t n, int c)
{
	size_t	i;
	char * 	s;

	i = 0;
	
	if (n >= 16)
		i + i = ft_exa(n / 16, c)
	if (c == 0)
	{
		s = "0123456789abcdef";
		write(1 ,s[n] , 1);
	}
	else
	{
		s = "0123456789ABCDEF";
		write(1 ,s[n] , 1);
	}
	i++;
	return (i);
}