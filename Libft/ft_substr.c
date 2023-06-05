/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:44:00 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/05 16:44:00 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int inic, size_t lon)
{
	char	*tmp;
	size_t	tam;

	tam = ft_strlen(s);
	if (inic > tam)
		return (ft_strdup(""));
	if (tam - inic < lon)
		lon = tam - inic;
	tmp = (char *) malloc(lon + 1);
	if (!tmp)
		return ('\0');
	ft_memcpy(tmp, s + inic, lon);
	tmp[lon] = '\0';
	return (tmp);
}
