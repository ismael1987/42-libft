/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 12:31:52 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/07 12:31:55 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new || !lst)
        return(NULL);
    new->next = *lst;
    *lst = new;
}

int main(void)
{
    t_list *lst;
    t_list *new;

    lst = NULL;

    new = malloc(sizeof(t_list));
    if (!new)
        return (1);
    new->content = "Hello";
    new->next = NULL;

    ft_lstadd_front(&lst, new);

    printf("First node: %s\n", (char *)lst->content);

    free(lst);
    return (0);
}
