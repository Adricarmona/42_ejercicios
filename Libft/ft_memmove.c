/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:24:24 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/01 19:24:24 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, void *str2, int n)
{
	char	*s1;
	char	*s2;
	int		i;

	s1 = (char *)str1;
	s2 = (char *)str2;
	if (s1 == 0 || s2 == 0 || n == 0)
		return (NULL);
	if (s1 < s2)
	{
		i = 0;
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	else
	{
		while (n--)
			s1[n] = s2[n];
	}
	return (str1);
}
