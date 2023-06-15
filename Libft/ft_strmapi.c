/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:36:33 by acarmona          #+#    #+#             */
/*   Updated: 2023/06/06 17:36:33 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		c;
	char	*tmp;
	int		i;

	i = ft_strlen(s);
	tmp = malloc(i * sizeof(char) + 1);
	if (!tmp)
		return (0);
	c = 0;
	while (s[c])
	{
		tmp[c] = f(c, s[c]);
		c++;
	}
	tmp[c] = '\0';
	return (tmp);
}
