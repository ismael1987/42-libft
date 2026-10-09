/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 11:39:29 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/09 11:39:31 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *tem;

    if (!lst || !*lst || !del)
        return;
    while (*lst != NULL)
    {
        tem = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = tem;
    }
}
