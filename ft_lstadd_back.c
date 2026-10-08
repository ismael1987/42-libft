/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:36:20 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/08 11:36:22 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastNode;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	lastNode = ft_lstlast(*lst);
	lastNode->next = new;
}

int main(void)
{
    t_list *a;
    t_list *b;
    t_list *c;
    t_list *lst;

    a = malloc(sizeof(t_list));
    b = malloc(sizeof(t_list));
    c = malloc(sizeof(t_list));

    a->content = "Hello";
    b->content = "World";
    c->content = "42";

    a->next = b;
    b->next = NULL;
    c->next = NULL;

    lst = a;

    ft_lstadd_back(&lst, c);

    while (lst)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }

    free(a);
    free(b);
    free(c);

    return (0);
}