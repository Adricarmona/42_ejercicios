/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:01:31 by acarmona          #+#    #+#             */
/*   Updated: 2023/04/26 10:04:35 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if ((unsigned char)str1[i] > (unsigned char)str2[i])
			return (1);
		else if ((unsigned char)str2[i] > (unsigned char)str1[i])
			return (-1);
	i++;
	}
	return (0);
}
