/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:51:23 by ialhusse          #+#    #+#             */
/*   Updated: 2026/09/29 12:51:59 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("\nIf %c is a printable or not? %d \n",c, isprint(c));
	printf("\n my method: If %c is a printable or not? %d \n",c, ft_isprint(c));
}
*/