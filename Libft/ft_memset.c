/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:16:32 by acarmona          #+#    #+#             */
/*   Updated: 2023/04/26 13:06:38 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_memset(void *s, int c, size_t n)
{
	char	*ot;

	ot = s;
	while (n-- > 0)
	{
		*ot = (unsigned char)c;
		ot++;
	}
	return (s);
}

int main(void)
{
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	ft_memset(str, '$', 5);
	puts(str);
	return (0);
}
