/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 22:40:47 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/06 22:40:47 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*tmp;

	if (!s1 || !s2)
		return (0);
	i = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char *)malloc(i + 1);
	if (!tmp)
		return (0);
	ft_memcpy(tmp, s1, ft_strlen(s1));
	ft_memcpy(tmp + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (tmp);
}
