/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialhusse <ialhusse@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:46:13 by ialhusse          #+#    #+#             */
/*   Updated: 2026/09/30 16:46:17 by ialhusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return (((unsigned char *)s) + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Hello, world!";
	char	*result;

	result = memchr(str, 'o', 13);
	if (result != NULL)
		printf("Found: %c\n", *result);
	else
		printf("Character not found\n");
	return (0);
}
*/