/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:14:29 by ialhusse          #+#    #+#             */
/*   Updated: 2026/09/29 10:14:41 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int num)
{
	if (num >= '0' && num <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	num;

	num = '5';
	printf("\nIf %c is a digit or not? %d",num, isdigit(num));
	printf("\n my method: If %c is a digit or not? %d",num, ft_isdigit(num));
	num = 'a';
	printf("\nIf %c is a digit or not? %d",num, isdigit(num));
	printf("\n my method: If %c is a digit or not? %d",num, ft_isdigit(num));
	num = '+';
	printf("\nIf %c is a digit or not? %d",num, isdigit(num));
	printf("\n my method: If %c is a digit or not? %d",num, ft_isdigit(num));
	return (0);
}
*/