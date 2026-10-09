/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:25:59 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/09 16:26:03 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newLst;
	t_list	*newNode;

	if (!lst || !f)
		return (NULL);
	newLst = NULL;
	while (lst != NULL)
	{
		newNode = ft_lstnew(f(lst->content));
		if (!newNode)
		{
			ft_lstclear(&newLst, del);
			return (NULL);
		}
		ft_lstadd_back(&newLst, newNode);
		lst = lst->next;
	}
	return (newLst);
}
