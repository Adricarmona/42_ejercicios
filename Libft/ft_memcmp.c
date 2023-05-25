/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:08:42 by acarmona          #+#    #+#             */
/*   Updated: 2023/04/26 10:10:00 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(char *str1, char *str2, int n)
{
	int	i;

i = 0;
	while (n != 0)
	{
	i = (unsigned char)*str1 - (unsigned char)*str2;
		if (i != 0)
			return (i);
	str1++;
	str2++;
	n--;
	}
	return (0);
}
