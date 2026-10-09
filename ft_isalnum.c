/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:38:34 by ialhusse          #+#    #+#             */
/*   Updated: 2026/09/29 10:38:38 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0'
			&& ch <= '9'))
		return (1);
	return (0);
}

/*
int	main(void)
{
	char	ch;

	ch = 'a';
	printf("\nIf %c is alphabet, number or not? %d",ch, isalnum(ch));
	printf("\n my method: If %c is alphabet, number or not? %d",ch,
		ft_isalnum(ch));
	ch = '9';
	printf("\nIf %c is alphabet, number or not? %d",ch, isalnum(ch));
	printf("\n my method: If %c is alphabet, number or not? %d",ch,
		ft_isalnum(ch));
	ch = '+';
	printf("\nIf %c is alphabet, number or not? %d",ch, isalnum(ch));
	printf("\n my method: If %c is alphabet, number or not? %d",ch,
		ft_isalnum(ch));
	return (0);
}
*/