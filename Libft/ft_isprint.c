/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:17:41 by acarmona          #+#    #+#             */
/*   Updated: 2023/04/20 18:02:06 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(char *c)
{
	int i;
	while (c[i] != '\0')
	{
		if (c[i] < 31 && c[i] > 127)
		{
			return (0);
		}
		i++;
	}
	return (!0);
}

int	main()
{
	char *da = "ddd";
	if(ft_isprint(*da))
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
}
