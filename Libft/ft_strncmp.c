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

int	ft_strncmp(const char *str1, const char *str2, int n)
{
	int	i;
	int	in1;
	int	in2;

i = 0;
	while (0 != n && (*str1 != '\0' && *str2 != '\0'))
	{
		if (*str1 > *str2)
		{
		i = *str1 - *str2 + i;
		}
		else if (*str2 > *str1)
		{
		i = *str2 - *str1 + i;
		}
	*str1++;
	*str2++;
	n--;
	}
	return (i);
}
