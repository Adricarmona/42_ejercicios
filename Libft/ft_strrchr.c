/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 00:23:50 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/18 12:16:50 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*tmp;

	tmp = (char *)str;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (tmp[i] == (char)c)
			return (&tmp[i]);
		i--;
	}
	return (0);
}
