/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:55:42 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/08 12:55:44 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst || !del)
        return;
    del(lst->content);
    free(lst);
}

void del(void *content)
{
    free(content);
}

int main(void)
{
    t_list *a;
    t_list *b;

    a = malloc(sizeof(t_list));
    b = malloc(sizeof(t_list));

    a->content = malloc(5);
    b->content = malloc(5);

    a->next = b;
    b->next = NULL;

    printf("Before: %p -> %p\n", (void *)a, (void *)a->next);

    ft_lstdelone(b, del);

    printf("B deleted\n");

    free(a);
    return (0);
}