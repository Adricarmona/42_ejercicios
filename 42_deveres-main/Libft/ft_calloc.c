/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:37:25 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/02 22:37:25 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size )
{
	void	*tmp;

	tmp = malloc(n * size);
	if (tmp == NULL)
		return (tmp);
	ft_memset (tmp, 0, n * size);
	return (tmp);
}
