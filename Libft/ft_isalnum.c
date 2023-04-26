/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:38:08 by acarmona          #+#    #+#             */
/*   Updated: 2023/04/20 15:48:56 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c > 47 && c < 58)
	{
		return (!0);
	}
	if (c > 64 && c < 91 || c > 96 && c < 123)
	{
		return (!0);
	}
	return (0);
}
