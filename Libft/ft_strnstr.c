/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:23:41 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/01 19:23:41 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strnstr(char *str1, char *str2, int n)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (str2[j] == '\0')
		return (*str1);
	while (str1[i] != '\0')
	{
		if (str1[i] == str2[j])
		{
			while (str1[i + j] == str2[j] && str2[j] != '\0')
			{
				j++;
			}
			if (str2[j] == '\0')
				return (str2[i]);
		}
	i++;
	}
	return (0);
}