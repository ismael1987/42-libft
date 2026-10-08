/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 14:56:25 by ialhusse          #+#    #+#             */
/*   Updated: 2026/10/07 14:56:27 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;
	t_list			*b;
	unsigned int	i;

	/*
	i = 0;
	b = lst;
	if (!lst)
		return(NULL);
	while (b->next != NULL)
	{
		b = b->next;
		i++;
	}
	return (i);
	*/
	i = 0;
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

int	main(void)
{
	t_list *node1;
	t_list *node2;
	t_list *node3;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));

	if (!node1 || !node2 || !node3)
		return (1);

	node1->content = "Hello";
	node1->next = node2;

	node2->content = "World";
	node2->next = node3;

	node3->content = "42";
	node3->next = NULL;

	printf("List size: %u\n", ft_lstsize(node1));

	free(node3);
	free(node2);
	free(node1);

	return (0);
}