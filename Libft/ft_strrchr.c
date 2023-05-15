/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 00:23:50 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/15 00:23:50 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int cha)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (str[j] != '\0')
	{
		tmp[j] = str[j];
		j++;
	}
	while (tmp[i] != '\0')
	i++;
	while (i > -1)
	{
		if (tmp[i] == cha)
			return (tmp);
		i--;
	}
	return (0);
}
