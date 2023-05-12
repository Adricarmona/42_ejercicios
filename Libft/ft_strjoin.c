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

#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*tmp;

i = ft_strlen(s1);
j = ft_strlen(s2);
	if (i == 0 && j == 0)
		return (NULL);
j = j + i;
i = 0;
tmp = (char *)malloc(sizeof(char) * j);
j = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] != '\0')
			tmp[i] = s1[i];
		else if (s2[j++] != '\0')
			tmp[i] = s2[j];
		i++;
	}
	return (tmp);
}
