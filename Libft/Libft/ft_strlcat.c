/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:24:12 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/01 19:24:12 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < n)
		i++;
	if (i < n)
	{
		while (n - 1 > i && src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	dest[i] = '\0';
	}
	while (src[j] != '\0')
	{
		j++;
		i++;
	}
	return (i);
}
