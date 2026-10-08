/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:09:17 by ialhusse          #+#    #+#             */
/*   Updated: 2026/09/29 14:09:22 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = dest;
	str2 = src;
	if (n == 0 || src == dest)
		return (str1);
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
/*
int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest1[20];
	char	dest2[20];

	ft_memcpy(dest1, src, 5);
	memcpy(dest2, src, 5);
	printf("ft_memcpy: %s\n", dest1);
	printf("memcpy:    %s\n", dest2);
	return (0);
}
*/