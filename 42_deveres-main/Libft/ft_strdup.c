/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:26:55 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/04 15:26:55 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	void	*tmp;
	size_t	i;

	i = ft_strlen(str) + 1;
	tmp = (char *) malloc (i);
	if (!tmp)
		return (0);
	ft_memcpy(tmp, str, i);
	return ((char *)tmp);
}
