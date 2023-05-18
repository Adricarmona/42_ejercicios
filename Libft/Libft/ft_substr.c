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

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	int		i;
	size_t	j;

i = 0;
j = 0;
tmp = (char *)malloc(len);
	while (start > 0)
	{
		start--;
		i++;
	}
	while (j < len)
	{
		tmp[j] = s[i];
		j++;
		i++;
	}
	return (tmp);
}
