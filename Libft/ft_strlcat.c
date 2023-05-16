/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:24:12 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/01 19:24:12 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char	*dest, char *src, int n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < n)
		i++;
	while (n > i && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	dest[i] = '\0';
	while (src[j] != '\0')
	{
		j++;
		i++;
	}
	return (i);
}
