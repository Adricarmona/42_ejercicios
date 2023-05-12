/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:23:35 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/08 18:23:35 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	int		i;
	int		j;

tmp = 0;
i = 0;
j = ft_strlen(s1);
	if (s1 != 0 && set != 0)
	{
		while (ft_strchr(set, s1[i]) != 0)
			i++;
		while (ft_strchr(set, s1[j]) != 0 && j > i)
			j--;
		tmp = (char *)malloc(sizeof(char) * j - i);
		ft_strlcpy(tmp, &s1[i], j - i);
	}
	return (tmp);
}
