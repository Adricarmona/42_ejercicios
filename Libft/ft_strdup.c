/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:26:55 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/04 15:26:55 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *str)
{
	char	*TMP;
	int	i;
	
	i = 0;
	TMP = 0;
	if(str[0]=='\0') 
		return 0;
	TMP = malloc(i*sizeof(char));
	while(str[i] != '\0')
	{
		TMP[i] = str[i];
		i++;
	}
	return (TMP);
}
