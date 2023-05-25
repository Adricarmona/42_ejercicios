/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:23:41 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/01 19:23:41 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (!*str2)
		return ((char *)str1);
	while (str1[i] && i < n)
	{
		j = 0;
		while (str1[i + j] == str2[j] && str2[j] && i + j < n)
		{
			if (str2[++j] == '\0')
				return ((char *)&str1[i]);
		}
		i++;
	}
	return (0);
}
