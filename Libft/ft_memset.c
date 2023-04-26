/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:16:32 by acarmona          #+#    #+#             */
/*   Updated: 2023/04/26 12:38:04 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_memset(void *str, int c, size_t n)
{
	char	*ot;

	ot = (char)str;
	while (n > 0)
	{
		*ot = (unsigned char)c;
		n--;
		ot++;
	}
	return (str);
}

// int	main()
// {
// 	printf("%s",ft_memset("testyeah", 'k', 2));
// }
