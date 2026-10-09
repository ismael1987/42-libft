/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:16:42 by ialhusse          #+#    #+#             */
/*   Updated: 2026/09/29 12:16:54 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			num;
	unsigned char	*str;

	num = 0;
	str = (unsigned char *)s;
	while (num < n)
	{
		str[num] = (unsigned char)c;
		num++;
	}
	return (s);
}
/*
int	main(void)
{
	char	str1[20] = "Hello World!";
	char	str2[20] = "Hello World!";

	ft_memset(str1, 'X', 5);
	memset(str2, 'X', 5);
	printf("ft_memset: %s\n", str1);
	printf("memset:    %s\n", str2);
	return (0);
}
*/