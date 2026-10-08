/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 10:41:48 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/08 10:41:56 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{  
    if (!lst)
        return (NULL);
    while (lst != NULL)
    {
        lst = lst->next;
        if (lst->next == NULL)
        {
            return(lst);
        }   
    }
}

int main(void)
{
    t_list *node1;
    t_list *node2;
    t_list *node3;
    t_list *last;

    node1 = malloc(sizeof(t_list));
    node2 = malloc(sizeof(t_list));
    node3 = malloc(sizeof(t_list));

    if (!node1 || !node2 || !node3)
        return (1);

    node1->content = "First";
    node1->next = node2;

    node2->content = "Second";
    node2->next = node3;

    node3->content = "Last";
    node3->next = NULL;

    last = ft_lstlast(node1);

    printf("Last node: %s\n", (char *)last->content);

    free(node3);
    free(node2);
    free(node1);

    return (0);
}
