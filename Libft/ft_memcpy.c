/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:39:22 by acarmona          #+#    #+#             */
/*   Updated: 2023/04/26 14:16:01 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*otr;
	const char	*otr2;
	int			i;

	otr2 = src;
	otr = dest;
	i = 0;
	while (n > 0)
	{
		otr[i] = otr2[i];
		i++;
		n--;
	}
	return (dest);
}
