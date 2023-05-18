/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:18:41 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/09 15:18:41 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	numlet(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j++;
		}
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**tmp;
	int		i;
	int		j;
	int		t;

	t = 0;
	i = 0;
	j = 0;
	tmp = 0;
	while (s[t] != '\0')
	{
		if (s[t] == c)
		{
			j++;
			i = 0;
		}
		else
		tmp[i][j] = s[t];
		i++;
		t++;
	}
	return (tmp);
}
