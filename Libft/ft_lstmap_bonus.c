/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarmona <acarmona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:48:17 by acarmona          #+#    #+#             */
/*   Updated: 2023/06/13 18:48:17 by acarmona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*resl;
	t_list	*first;

	if (!lst)
		return (NULL);
	first = malloc(sizeof(t_list));
	if (!first)
		return (NULL);
	resl = first;
	resl->content = f(lst->content);
	while (lst->next)
	{
		lst = lst->next;
		resl->next = malloc(sizeof(t_list));
		if (!resl->next)
		{
			ft_lstclear(&first, del);
			return (0);
		}
		resl->next->content = f(lst->content);
		resl = resl->next;
	}
	resl->next = NULL;
	return (first);
}
