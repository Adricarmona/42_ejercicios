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

#include <stdlib.h>

void	*ft_calloc(int n, int size )
{
	void	*tmp;

	tmp = malloc(n * size);
	if (tmp == NULL)
		return (tmp);
	while (n != 0)
	{
		tmp = 0;
		tmp++;
		n--;
	}
	return (tmp);
}
