/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfernan2 <bfernan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:47:06 by bfernan2          #+#    #+#             */
/*   Updated: 2025/08/02 17:09:08 by bfernan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*pos_list;
	t_list	*node;
	void	*content;
	t_list	*aux;

	pos_list = lst;
	node = NULL;
	aux = NULL;
	while (pos_list != NULL)
	{
		content = f(pos_list->content);
		node = ft_lstnew(content);
		if (!node)
		{
			ft_lstclear(&aux, del);
			return (NULL);
		}
		ft_lstadd_back(&aux, node);
		pos_list = pos_list->next;
	}
	return (aux);
}
