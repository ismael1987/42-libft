/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:34:17 by ialhusse          #+#    #+#             */
/*   Updated: 2026/09/30 17:34:21 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";
	char	s3[] = "Hella";
	char	s4[] = "Hellb";

	printf("Test 1: %d\n", memcmp(s1, s2, 7));
	printf("My Test: %d\n", ft_memcmp(s1, s2, 7));
	printf("Test 2: %d\n", memcmp(s1, s3, 4));
	printf("My Test: %d\n", ft_memcmp(s1, s3, 4));
	printf("Test 3: %d\n", memcmp(s1, s4, 5));
	printf("My Test: %d\n", ft_memcmp(s1, s4, 5));
	return (0);
}
*/