/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:24:24 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/01 19:24:24 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memmove(void *str1, void *str2, int n)
{
    char    *s1;
    char    *s2;

    s1 = (unsigned char)str1;
    s2 = (unsigned char)str2;
    while (n > 0)
    {
        if (s2 == '\0')
        {
            n = 0;
        }
        else
        {
            *s2 = *s1;
        }
        s1++;
        s2++;
        n--;
    }
    return (str1);
}