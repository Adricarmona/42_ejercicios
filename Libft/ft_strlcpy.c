/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:24:03 by acarmona          #+#    #+#             */
/*   Updated: 2023/05/01 19:24:03 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    *ft_strlcpy(char *dest, char *src , unsigned int n)
{
int i;

i = 0;
if (n > 0)
{
  while (n > 0 && src[i])
  {
      dest[i] = src[i];
      i++;
      n--;
  }
  dest[i] = '\0';
}
  while (src[i + 1])
  {
    i++;
  }
return (i);
}