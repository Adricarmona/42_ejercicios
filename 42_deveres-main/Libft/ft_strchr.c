/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:59:08 by acarmona          #+#    #+#             */
/*   Updated: 2023/04/26 10:00:31 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int i)
{
	if ((!*str && (char)i == '\0'))
		return ((char *)str);
	while (*str != '\0')
	{
		if (*str == (char)i)
			return ((char *)str);
		str++;
		if (*str == (char)i)
			return ((char *)str);
	}
	return (0);
}
