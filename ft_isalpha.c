/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 15:53:07 by ialhusse          #+#    #+#             */
/*   Updated: 2026/09/28 15:53:15 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	ch;

	ch = 'a';
	printf("\nIf %c is alphabet or not? %d",ch, isalpha(ch));
	printf("\n my method: If %c is alphabet or not? %d",ch, ft_isalpha(ch));
	ch = '5';
	printf("\nIf %c is alphabet or not? %d",ch, isalpha(ch));
	printf("\n my method: If %c is alphabet or not? %d",ch, ft_isalpha(ch));
	ch = '+';
	printf("\nIf %c is alphabet or not? %d",ch, isalpha(ch));
	printf("\n my method: If %c is alphabet or not? %d",ch, ft_isalpha(ch));
	return (0);
}
*/