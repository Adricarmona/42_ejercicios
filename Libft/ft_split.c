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

#include "libft.h"

int	numlet(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (j);
}

static int	wordlon(char const *s, char c, int i)
{
	int	l;

	l = 0;
	while (s[i] != c && s[i])
	{
		l++;
		i++;
	}
	return (l);
}

char	**ft_free(char **s, int j)
{
	while (--j >= 0)
		free(s[j]);
	free(s);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	char	**strs;
	int		size;
	int		j;

	i = 0;
	j = -1;
	word = numlet(s, c);
	(strs = (char **)malloc((word + 1) * sizeof(char *)));
	if (strs == 0)
		return (0);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = wordlon(s, c, i);
		(strs[j] = ft_substr(s, i, size));
		if (!strs[j])
			return (ft_free(strs, j));
		i += size;
	}
	strs[j] = 0;
	return (strs);
}
