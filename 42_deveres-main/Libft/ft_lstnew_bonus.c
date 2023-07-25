/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:03:48 by acarmona          #+#    #+#             */
/*   Updated: 2023/06/13 18:03:48 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *con)
{
	struct s_list	*n;

	n = malloc(sizeof(struct s_list));
	if (!n)
		return (0);
	n->content = con;
	n->next = NULL;
	return (n);
}
