/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:26:34 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/07 11:26:42 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *newNode;

    newNode = malloc(sizeof(t_list));
    if (!newNode)
        return NULL;
    newNode -> content = content;
    newNode -> next = NULL;
    return(newNode); 
}

int main(void)
{
    int     number;
    t_list  *node;

    number = 42;
    node = ft_lstnew(&number);

    if (!node)
        return (1);

    printf("number: %d\n", *(int *)node->content);
    printf("next: %p\n", (void *)node->next);

    char *hehe = "hello";
    printf("%s\n", hehe + 1);
    free(node);
    return (0);
}