/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:05:12 by acarmona          #+#    #+#             */
/*   Updated: 2023/04/26 10:08:19 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memchr(char *st, char ch, int n)
{
	while (0 != n)
	{
		if (ch == *st)
		{
			return (st);
		}
	st++;
	n--;
	}
	return (0);
}
