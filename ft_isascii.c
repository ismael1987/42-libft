/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:50:06 by ialhusse          #+#    #+#             */
/*   Updated: 2026/09/29 10:51:18 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;

	c = '5';
	printf("\nIf %c is a ascii or not? %d",c, isascii(c));
	printf("\n my method: If %c is a ascii or not? %d",c, ft_isascii(c));
	c = 'a';
	printf("\nIf %c is a ascii or not? %d",c, isascii(c));
	printf("\n my method: If %c is a ascii or not? %d",c, ft_isascii(c));
	c = '#';
	printf("\nIf %c is a ascii or not? %d",c, isascii(c));
	printf("\n my method: If %c is a ascii or not? %d",c, ft_isascii(c));
	return (0);
}
*/