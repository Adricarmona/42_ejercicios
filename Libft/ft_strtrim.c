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

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	int		i;

	if (!s1 || !set)
		return (0);
	if (s1[0] == '\0' && set[0] == '\0')
	{
		tmp = malloc(sizeof(char));
		if (!tmp)
			return (0);
		tmp[0] = '\0';
		return (tmp);
	}
	while (*s1 && ft_strchr(set,*s1))
		s1++;
	i = ft_strlen(s1);
	while (i > 0 && ft_strchr(set, s1[i]))
		i--;
	tmp = ft_substr(s1, 0, (size_t)i + 1);
	return (tmp);
}
